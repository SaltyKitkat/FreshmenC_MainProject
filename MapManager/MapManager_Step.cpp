#include "MapManager.h"

//�������ֺ�����λ�ã��������λ�ò��Ϸ�����Ϸ����
//��������
//д���ļ�
//��ȡ��һ��������λ���б�
//�����Ϊ�գ��л��¼ң�����
//���Ϊ�գ���ñ����б�
//������һ����£����Ҽ���
//������Ϸ������GaneFinished��λ
int cglst[64][2] ;
int MapManager_Step(int player, int x, int y)
{
    //�ŵ������µĵط����Է�Ӯ
    if(!MapManager_CanGo(player,x,y))
    {
        MapManager_GameFinished=true;
        MapManager_GameWinner=!player; 
        return 0 ;
    }

    //�µ������µĵط�
    //�������̲�д��
    MapManager_Reverse(player,x,y);
    if(MapManager_GetCanGoList(!player,cglst))  return !player;
    if(MapManager_GetCanGoList(player,cglst))  return player;
    Mapmanager_GameOver();
    return player;

    

  
}
