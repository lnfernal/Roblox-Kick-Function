//lol this is the kick function ik its gay
_DWORD *__thiscall sub_663E10(_DWORD *this, const char *a2)//replace a2 with your custom message!
{
  *this = 0;
  this[4] = 0;
  this[5] = 15;
  sub_663D40(a2, strlen(a2));
  return this;
}
//sub_663E10("YOU GOT KICKED DUE TO SKIDSPLOIT");

_DWORD *__thiscall sub_663D40(_DWORD *this, int a2, unsigned int a3)//idk what is this i just decompiled due to it being a function of the previous function
{
  unsigned int v5; // ecx
  _DWORD *v6; // ebx
  _DWORD *result; // eax
  unsigned int v8; // ebx
  unsigned int v9; // edx
  unsigned int v10; // [esp+Ch] [ebp-4h]
  int v11; // [esp+1Ch] [ebp+Ch]

  v5 = this[5];
  v10 = v5;
  if ( a3 > v5 )
  {
    if ( a3 > 0x7FFFFFFF )
      sub_663AD0();
    v8 = a3 | 0xF;
    if ( (a3 | 0xF) <= 0x7FFFFFFF )
    {
      v9 = v5 >> 1;
      if ( v5 <= 0x7FFFFFFF - (v5 >> 1) )
      {
        if ( v8 < v9 + v5 )
          v8 = v9 + v5;
      }
      else
      {
        v8 = 0x7FFFFFFF;
      }
    }
    else
    {
      v8 = 0x7FFFFFFF;
    }
    v11 = sub_663C20(v8 + 1);
    this[4] = a3;
    this[5] = v8;
    sub_20212F0(v11, a2, a3);
    *(_BYTE *)(v11 + a3) = 0;
    if ( v10 >= 0x10 )
      sub_663CC0(*this, v10 + 1);
    *this = v11;
    result = this;
  }
  else
  {
    v6 = this;
    if ( v5 >= 0x10 )
      v6 = (_DWORD *)*this;
    this[4] = a3;
    sub_20212F0(v6, a2, a3);
    *((_BYTE *)v6 + a3) = 0;
    result = this;
  }
  return result;
}
