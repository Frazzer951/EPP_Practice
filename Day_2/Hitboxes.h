#pragma once

#include <fstream>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

struct Character
{
  string name;
  string type;
  int    length;
  int    width;
};

class Hitboxes
{
private:
  vector<Character> m_CharacterList;

public:
  Hitboxes( string filename );

  string smallestCharacter();
  string smallestType();
};

Hitboxes::Hitboxes( string filename )
{
  ifstream s( filename );

  string name;
  string type;
  int    length;
  int    width;

  while( s >> name )
  {
    s >> type;
    s >> length;
    s >> width;
    m_CharacterList.emplace_back( Character { name, type, length, width } );
  }
}

std::string Hitboxes::smallestCharacter()
{
  std::string smallestName = m_CharacterList[0].name;
  int         smallestArea = m_CharacterList[0].length * m_CharacterList[0].width;
  for( auto character : m_CharacterList )
  {
    int tempArea = character.width * character.length;
    if( tempArea < smallestArea )
    {
      smallestArea = tempArea;
      smallestName = character.name;
    }
  }
  return smallestName;
}

std::string Hitboxes::smallestType()
{
  map<string, int> typeArea;
  for( auto character : m_CharacterList )
  {
    typeArea[character.type] += character.width * character.length;
  }
  std::string sType = m_CharacterList[0].type;
  int         sArea = typeArea[sType];

  for( auto obj : typeArea )
  {
    if( obj.second < sArea )
    {
      sType = obj.first;
      sArea = obj.second;
    }
  }
  return sType;
}
