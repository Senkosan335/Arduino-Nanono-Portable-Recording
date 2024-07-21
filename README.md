# Arduino-Nanono-Portable-Recording

【中文CN介绍】
这是作者第一次上传GitHub，有做的不到位的地方请原谅
这个是我最初做的，有点小瑕疵，只能用两颗按钮控制录音和停止，一红一绿LED判断读卡是否正常，第二个文件和这一个同样一次只能录一个test.wav音频文件，在测试中发现pin4的speaker功能不可用，当然可能是我没接对或者方法错了你可以再尝试


注意，实测arduino Nano328p仅支持16G大小的储存卡，其他8G和32G试验后不可行，当然你也可以自己试一下，万一你那里可以呢


在使用库文件之前，先用c语言工具进去删指定的注释，具体看此网站https://www.cnblogs.com/Ray-liang/p/9786154.html，
/*
TMRpcm里面有一个用于录音的方法，源码中是被注释掉的，在安装该库之后需要打开源码库中的pcmConfig.h文件将以下的行取消注释，否则会编译不通过：

#define buffSize 128 
#define ENABLE_RECORDING 
#define BLOCK_COUNT 10000UL
*/





或者看第二个UNO文件夹里面的注意事项!还有那个arduino文件里面也有很多参考网址，可以看一下


录制的时长取决于SD内存卡的空间大小。如果你不奢求随放随听，建议就只采用两个按键控制录音和停止，sd卡取出来放mp3播放器中一样的听，如果有智能设备的话可以把录音文件的名字重命名一下再插入模块里面录音，当然有智能设备了这个东西就多余了，只是相当于一个探索和实践的过程，算是个小玩具。希望能帮到你。祝您玩的开心！

######################################################################################################################################

【English introduce】

This is the author's first time uploading GitHub, please forgive me for not doing something right



  【This is what I did initially.,A little flaw.,You can only use two buttons to control recording and stop.,A red and a green LED to judge whether the card reading is normal,The second one is shared by others and this one, you can only record one test.wav audio file at a time,In the test, it was found that pin4's speaker function is not available,Of course, it may be that I didn't answer it correctly or the method is wrong, you can try again】

  【Note that the measured arduino nano 328p only supports 16G memory cards, and other 8G and 32G tests are not feasible, of course, you can also try it yourself, in case you can】

  【Before using the library file, use the C language tool to delete the specified annotation, see the specific https://www.cnblogs.com/Ray-liang/p/9786154.html of this website,
/*
TMRpcm has a method for recording, the source code is commented out, after installing the library, you need to open the pcmConfig.h file in the source code library to uncomment the following lines, otherwise it will fail to compile:

#define buffSize 128 
#define ENABLE_RECORDING 
#define BLOCK_COUNT 10000UL
*/】

【Or look at the notes inside the UNO second folder! There are also a lot of reference URLs in that arduino file, so you can take a look】

 The duration of the recording depends on the amount of space on the SD memory card.      [If you don't have the luxury of listening as you go,It is recommended to use only two buttons to control recording and stop,SD card taken out and put the mp3 player in the same listening,If there is a smart device, you can rename the name of the recording file and then insert it into the module to record,Of course, there is a smart device, this thing is redundant,It's just equivalent to a process of exploration and practice,It's a small toy。 Hope it helps. Have fun! 】

