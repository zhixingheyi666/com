# QT串口调试工具
> 2017-6-19

## 基本功能：
1. 支持16进制数据发送与接收
2. 支持windows下COM9以上的串口通信
3. 自动加载对应操作系统串口号
4. 实时显示收发数据字节大小以及串口状态
5. 支持串口转网络

## 高级功能：
1. 可自由管理需要发送的数据，每次只要从下拉框中选择数据即可，无需重新输入数据
2. 可模拟设备回复数据，需要在主界面开启模拟设备回复数据。当接收到设置好的指令时，立即回复设置的回复指令。例如指定收到0x16 0x00 0xFF 0x01需要回复0x16 0x00 0xFE 0x01，则只需要在SendData.txt中添加一条数据16 00 FF 01:16 00 FE 01即可
3. 可定时发送数据和保存数据到文本文件:，默认间隔5秒钟，可更改间隔时间。
4. 在不断接收到大量数据时，可以暂停显示数据来查看具体数据，后台依然接收数据但不处理，无需关闭串口来查看已接收到的数据
5. 每次收到的数据都是完整的一条数据，而不是脱节的，做了延时处理。
6. 一套源码随处编译，无需更改串口通信类，已在XP/WIN7/UBUNTU/ARMLINUX系统下成功编译并运行。

> *Qt 写的串口工具，有什么问题请联系我QQ（1065354620）*