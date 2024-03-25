{
  "nbformat": 4,
  "nbformat_minor": 0,
  "metadata": {
    "colab": {
      "provenance": [],
      "authorship_tag": "ABX9TyOHnXKmeqP+ZP37p5FxJ/mf"
    },
    "kernelspec": {
      "name": "python3",
      "display_name": "Python 3"
    },
    "language_info": {
      "name": "python"
    }
  },
  "cells": [
    {
      "cell_type": "code",
      "execution_count": 1,
      "metadata": {
        "id": "KMklyPR_q4Kj"
      },
      "outputs": [],
      "source": [
        "import cv2 as cv\n",
        "import matplotlib.pyplot as plt\n",
        "import numpy"
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "from google.colab import drive\n",
        "drive.mount('/content/drive')"
      ],
      "metadata": {
        "id": "Lc68K5DGunJF"
      },
      "execution_count": null,
      "outputs": []
    },
    {
      "cell_type": "code",
      "source": [
        "from ast import Index\n",
        "def SIFT(sift, frame1, frame2):\n",
        "\n",
        "  # convert colors to gray\n",
        "  img1 = cv.cvtColor(frame1, cv.COLOR_BGR2GRAY)\n",
        "  img2 = cv.cvtColor(frame2, cv.COLOR_BGR2GRAY)\n",
        "\n",
        "  # find the keypoints and descriptors with SIFT\n",
        "  kp1, des1 = sift.detectAndCompute(img1,None)\n",
        "  kp2, des2 = sift.detectAndCompute(img2,None)\n",
        "\n",
        "  bf = cv.BFMatcher()\n",
        "  matches = bf.knnMatch(des1,des2,k=2)\n",
        "\n",
        "  # Apply ratio test\n",
        "  good = []\n",
        "  for m,n in matches:\n",
        "    if m.distance < 0.75*n.distance:\n",
        "      good.append([m])\n",
        "\n",
        "  # cv.drawMatchesKnn expects list of lists as matches.\n",
        "  img3 = cv.drawMatchesKnn(img1,kp1,img2,kp2,good,None,flags=cv.DrawMatchesFlags_NOT_DRAW_SINGLE_POINTS)\n",
        "\n",
        "  plt.imshow(img3)\n",
        "  plt.show()\n",
        "\n",
        "def main(video_path):\n",
        "\n",
        "  cap = cv.VideoCapture(video_path)\n",
        "\n",
        "  if not cap.isOpened():\n",
        "    print(\"Error! Colud not opened the video!\")\n",
        "    return\n",
        "\n",
        "  sf = cv.SIFT_create()\n",
        "  frame1 = None\n",
        "  prev_frame = None\n",
        "\n",
        "  while True:\n",
        "\n",
        "    ret1, frame1 = cap.read()\n",
        "    ret2, frame2 = cap.read()\n",
        "\n",
        "    # end of the video\n",
        "    if not ret1 or not ret2:\n",
        "      break\n",
        "\n",
        "    # to get 1&2, 2&3, 3&4 ... n-1&n frames -> consecutive\n",
        "    if frame1 is not None and prev_frame is not None:\n",
        "      printFrameInfo()\n",
        "      SIFT(sf, prev_frame, frame1)\n",
        "\n",
        "    prev_frame = frame2.copy()\n",
        "\n",
        "    printFrameInfo()\n",
        "    SIFT(sf, frame1, frame2)\n",
        "\n",
        "def printFrameInfo():\n",
        "  global idx\n",
        "  print(\"frame\" + str(idx) + \" - frame\" + str(idx+1))\n",
        "  idx += 1\n",
        "\n",
        "\n",
        "\n",
        "if __name__ == \"__main__\":\n",
        "    video_path = '/content/drive/MyDrive/vid/video.mp4'\n",
        "    main(video_path)\n"
      ],
      "metadata": {
        "id": "tgihaefgzLiC"
      },
      "execution_count": null,
      "outputs": []
    }
  ]
}