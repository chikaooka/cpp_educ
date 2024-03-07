#include <stdio.h>

#include <iostream>
#include <opencv2/opencv.hpp>

/*
 *   引数に指定したパスの画像を表示するだけのプログラム
 *   使い方↓
 *   ./displayImage [画像へのパス]
 */

int main(int argc, char *argv[]) {
  // 引数の数を確認しておかしければエラーを吐く
  if (argc != 2) {
    std::cerr << "Usage: ./displayImage [image_path]" << std::endl;
    return 1;
  }

  // cv::Mat型の変数を定義
  cv::Mat image;

  // 画像を読み込んで image に格納する
  image = cv::imread(argv[1], 1);

  // imageにデータが存在しない場合にはエラーを吐く
  if (!image.data) {
    std::cerr << "ERROR: No Image Data" << std::endl;
    return 1;
  }

  cv::Mat img_bin;
  cv::cvtColor(image, img_bin, cv::COLOR_BGR2GRAY);

  // チャンネル数の確認
  std::cout << "image   : " << image.channels() << " channel" << std::endl;
  std::cout << "img_bin : " << img_bin.channels() << " channel" << std::endl;

  // 画像を表示するためのWindowを定義
  cv::namedWindow("Image", cv::WINDOW_AUTOSIZE);

  // Windowに画像を表示する
  cv::imshow("Image", img_bin);

  // 何かキーが押されたら終了
  cv::waitKey(0);

  return 0;
}