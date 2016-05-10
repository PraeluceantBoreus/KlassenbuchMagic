/*
 * <one line to give the program's name and a brief idea of what it does.>
 * Copyright (C) 2016  <copyright holder> <email>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 */

#include "klasse.h"
#include <iostream>

Klasse::Klasse(string bezeichnung)
{
  setBezeichnung(bezeichnung);
  created = true;
}


Klasse::~Klasse()
{

}

string Klasse::getBezeichnung()
{
  return bezeichnung;
}

map<int, Schueler*>& Klasse::getSchuelers()
{
  return schueler;
}

void Klasse::addSchueler(Schueler* schueler, int katalognummer)
{
  int size = getSchuelers().size();
  //getSchuelers()[katalognummer] = schueler;
  getSchuelers().insert(make_pair(katalognummer, schueler));
  int size2 = getSchuelers().size();
}

bool Klasse::setBezeichnung(string bezeichnung)
{
  if(!bezeichnung.empty())
  {
    this->bezeichnung = bezeichnung;
    return true;
  }
  if(!created)
    setBezeichnung("1AHIF");
  return false;
}

Klasse* Klasse::bspKlasse()
{
  Klasse* k = new Klasse("3AHIF");
  string nummern [] = {"tot16398", "sto16373", "sch16344", "san16333"};
  string vornamen [] = {"Dennis", "Richard", "Guido", "Luca"};
  string nachnamen [] = {"Toth", "Stöckl", "Schreier", "Sanda"};
  int i = 0;
  int baum = 0;
  for(string s : nummern) {
    k->addSchueler(new Schueler(nummern[i], vornamen[i], nachnamen[i]), i+19);
    i++;
    baum = k->getSchuelers().size();
  }
  return k;
}

int Klasse::test()
{
  return 4;
}


