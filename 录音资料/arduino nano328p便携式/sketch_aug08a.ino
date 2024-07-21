#include <pcmConfig.h>
#include <pcmRF.h>
#include <TMRpcm.h>

#include <SPI.h>

#include <SD.h>


#define SD_ChipSelectPin 10  // 如果使用 arduino nano 328 接pin10脚位
#define FLED A4
#define YLED A5
#define Rbutton 5
#define Sbutton 4
TMRpcm audio;   

void setup() {
  
  pinMode(FLED, OUTPUT);
  pinMode(YLED, OUTPUT);
  audio.speakerPin = 4; 

  Serial.begin(115200);
  
  if (!SD.begin(SD_ChipSelectPin)) {  
    Serial.println("SD Fail");
    digitalWrite(FLED, HIGH);
    return;
  }else{
    Serial.println("SD OK");
    digitalWrite(YLED, HIGH);
  }
  audio.CSPin = SD_ChipSelectPin;
}

    
void loop() {
     
    if(digitalRead(5)==(HIGH)){                          
      char c = 'r';
    }
    if(digitalRead(4)==(HIGH)){                          
      char c = 's';
    }
      switch(c){
        case 'r': audio.startRecording("test.wav",16000,A0); break;    //以16khz的采样率开始录音
        //case 'R': audio.startRecording("test.wav",16000,A0,1); break;  //录音并直接进行回放
        //case 't': audio.startRecording("test.wav",16000,A0,2); break;  //将录音直接进行回放
        case 's': audio.stopRecording("test.wav"); break;                  //停止录音
        //case 'p': audio.play("test.wav"); break;                                 //回放录音
        //case '=': audio.volume(1); break;                                          //增加音量
        //case '-': audio.volume(0); break;                                         //减小音量
        //case 'S': audio.stopPlayback(); break;                                  //停止所有的回放
        
      }
    }
}
