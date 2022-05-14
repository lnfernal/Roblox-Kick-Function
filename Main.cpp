char **__fastcall sub_165F3D0(char **a1, int a2)//runs as entry with supposedly 2 arguments?
{
  char *v3; // eax
  char **result; // eax
  char *v5; // eax
  char *v6; // eax
  char *v7; // eax
  char *v8; // edx
  char *v9; // eax
  char *v10; // ecx

  if ( a2 > 257 )
  {
    switch ( a2 )//using cases roblox? wow
    {
      case 258:
      case 272:
        *a1 = 0;
        a1[4] = 0;
        a1[5] = (char *)15;
        *(_BYTE *)a1 = 0;
        v6 = (char *)sub_663C20(96);
        a1[4] = (char *)87;
        a1[5] = (char *)95;
        strcpy(v6, "Disconnected due to unsupported version. Please upgrade to the latest version of Roblox");//no
        *a1 = v6;
        result = a1;
        break;
      case 259:
        *a1 = 0;
        a1[4] = 0;
        a1[5] = (char *)15;
        *(_BYTE *)a1 = 0;
        v7 = (char *)sub_663C20(48);
        a1[4] = (char *)35;
        v8 = v7;
        a1[5] = (char *)47;
        qmemcpy(v7, "Protocol mismatch, please reconnect", 35);//lol
        result = a1;
        v8[35] = 0;
        *a1 = v8;
        break;
      case 260:
        *a1 = 0;
        a1[4] = 0;
        a1[5] = (char *)15;
        *(_BYTE *)a1 = 0;
        v9 = (char *)sub_663C20(48);
        a1[4] = (char *)44;
        v10 = v9;
        a1[5] = (char *)47;
        qmemcpy(v9, "Error while receiving data, please reconnect", 44);//data? wtf just automaticlaly rejoin game retard
        result = a1;
        v10[44] = 0;
        *a1 = v10;
        break;
      case 261:
        sub_663E10("Error while streaming data, please reconnect");//streaming? wtf
        result = a1;
        break;
      case 262:
        sub_663E10("Error while sending data, please reconnect");//no
        result = a1;
        break;
      case 263:
        sub_663E10("Invalid teleport destination Ass");//wtf
        result = a1;
        break;
      case 264:
        sub_663E10("You are already playing a game. Please shut down the other game and try again");//idk
        result = a1;
        break;
      case 265:
        sub_663E10("Error processing ticket, please reconnect");//ticket?
        result = a1;
        break;
      case 266:
        sub_663E10("Lost connection to server due to timeout");//lol
        result = a1;
        break;
      case 267:
        sub_663E10("You have been kicked from the game");//FOR WHAT FUCKING REASON!!
        result = a1;
        break;
      case 268:
        sub_663E10("You have been kicked by server. Please close and rejoin another game");//FOR WHAT FUCKING REASON!
        result = a1;
        break;
      case 269:
        sub_663E10("Disconnected due to timeout, please reconnect");//ok
        result = a1;
        break;
      case 270:
        sub_663E10("You have been disconnected from Team Create, please reconnect");//yes
        result = a1;
        break;
      case 271:
        sub_663E10("You have been kicked by server, please reconnect");//no
        result = a1;
        break;
      case 273:
        sub_663E10("Disconnected from game, possibly due to game joined from another device");//NO
        result = a1;
        break;
      case 274:
        sub_663E10("Developer has shut down this game server for maintenance");//ASHOLE
        result = a1;
        break;
      case 275:
        sub_663E10("Roblox has shut down this game server for maintenance");//GETFUCKED
        result = a1
        break;
      case 276:
        sub_663E10("This game has been disconnected because you have joined a game from another device");
        result = a1;
        break;
      case 283:
        sub_663E10("Requesting RoMark Reconnect");
        result = a1;
        break;
      case 285:
        sub_663E10("Client initiated disconnect");
        result = a1;
        break;
      default:
        goto LABEL_27;
    }
  }
  else if ( a2 == 257 )
  {
    *a1 = 0;
    a1[4] = 0;
    a1[5] = (char *)15;
    *(_BYTE *)a1 = 0;
    v5 = (char *)sub_663C20(112);
    a1[4] = (char *)104;
    a1[5] = (char *)111;
    strcpy(
      v5,
      "Disconnected due to authentication failure. Please upgrade to the latest version of Roblox and reconnect");//no
    *a1 = v5;
    result = a1;
  }
  else if ( a2 == -1 )
  {
    *a1 = 0;
    a1[4] = 0;
    a1[5] = (char *)15;
    *(_BYTE *)a1 = 0;
    v3 = (char *)sub_663C20(112);
    a1[4] = (char *)105;
    a1[5] = (char *)111;
    strcpy(
      v3,
      "Developer has shut down all game servers or game server has shut down for other reasons, please reconnect");
    *a1 = v3;
    result = a1;
  }
  else
  {
LABEL_27:
    *a1 = 0;
    a1[4] = 0;
    a1[5] = (char *)15;
    *(_BYTE *)a1 = 0;
    sub_663D40("Disconnected from game, please reconnect", 40);
    result = a1;
  }
  return result;
}
