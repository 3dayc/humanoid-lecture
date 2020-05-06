
#include <SoftwareSerial.h>  

SoftwareSerial BT(2,3) ;  

// not use 97
void ActionDelay(unsigned char d)
{
  switch(d){
    
    case 1:
    case 2:  case 3:  case 4 : case 5:
    case 6:  case 7:  case 8 : case 9:
    case 10: case 11: case 12: case 13 :
    case 22 : case 23 : case 28 : case 29 :
    case 30 : case 39: case 40 : case 51:
    case 55: case 57 : case 59: case 75:
    case 76 : case 77 : case 78 : case 79 :
    case 80: case 81: case 82 : case 83 :
    case 86: case 88 : case 102 : case 104 :
        
    delay(1000);
    break;

    case 24: case 25 : case 26 : case 27: 
    case 31 :case 32: case 33: case 34 :
    case 35: case 36 : case 41: case 42:
    case 43 : case 44 : case 45 : case 46:
    case 47 : case 52: case 56 : case 58 :
    case 60 : case 61 : case 62 : case 63:
    case 64: case 65 : case 66: case 67 :
    case 68 : case 69: case 85:case 87:
    case 89 : case 90 : case 91: case 92 :
    case 93: case 98: case 99 : case 100:
    case 101: case 103: case 105 : case 106 :
    case 107: case 108: case 109: case 110:
    case 111: case 112:
    
    delay(2000);
    break ;

    case 48 :case 49: case 50 :
    delay(2500); 
    break;

    case 70 : case 71: case 72 :
    delay(3000);
    break;

    case 240 : delay(5000); break;
   
    case 17: case 18 : delay(15000);
    break;

    case 16: case 19: case 84: case 94:
    case 115: case 116: case 241 :
    delay(7000);
    break;

    default :break; 


   }  
}

void ActionRobot(unsigned char exeIndex)
{
unsigned char exeCmd[15] = {0xff, 0xff, 0x4c, 0x53, 0x00, 
                              0x00, 0x00, 0x00, 0x30, 0x0c, 0x03, // 0x0c=���� ���� ��� 0x03=�Ķ��Ÿ�� 
                              0x01, 0x00, 100, 0x54};             // Index 01 ��ɾ� ����
/*                             |      |    |    `---Check sum
                               |      |    `--------�ӵ�      �Ķ�1
                               |      `-------------�����ð�  �Ķ�2
                               `--------------------Index    �Ķ�3
*/  
// 14, 15, 20, 21, 37, 38, 53, 54, 73, 74
// 95, 96, 97,113, 114 ,117, 118
if(exeIndex==14 || exeIndex==15 || exeIndex==20  || exeIndex==21 || exeIndex== 37
    ||exeIndex== 38 || exeIndex== 53 || exeIndex== 54 || exeIndex== 73 || exeIndex== 74
    || exeIndex== 95 || exeIndex== 96 || exeIndex== 97 || exeIndex== 113 || exeIndex== 114
    || exeIndex== 117 || exeIndex== 118) return ;

  exeCmd[11] = exeIndex;
  exeCmd[14] = 0x00;    // checksum
    
  for (int i=6;i<14;i++)
    exeCmd[14]+=exeCmd[i];    
  
  BT.write(exeCmd,15);
  delay(100); 

  ActionDelay(exeIndex);
}
