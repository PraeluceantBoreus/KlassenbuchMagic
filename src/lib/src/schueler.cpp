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

#include "../include/schueler.h"

Schueler::Schueler(string nummer, string vorname, string nachname)
{
  this->setNummer(nummer);
  this->setVorname(vorname);
  this->setNachname(nachname);
  created = true;
}


Schueler::Schueler(const Schueler& other)
{
  Schueler(other.nummer, other.vorname, other.nachname);
}

Schueler::~Schueler()
{

}

string Schueler::getNachname()
{
  return nachname;
}

string Schueler::getNummer()
{
  return nummer;
}

string Schueler::getVorname()
{
  return vorname;
}

bool Schueler::setNachname(string nachname)
{
  if(!nachname.empty())
  {
    this->nachname = nachname;
    return true;
  }
  if(!created)
  {
    this->nachname = "Mustermann";
  }
  return false;
}

bool Schueler::setNummer(string nummer)
{
  if(!nummer.empty())
  {
    this->nummer = nummer;
    return true;
  }
  if(!created)
  {
    this->nummer = "mus00000";
  }
  return false;
}

bool Schueler::setVorname(string vorname)
{
  if(!vorname.empty())
  {
    this->vorname = vorname;
    return true;
  }
  if(!created)
  {
    this->vorname = "Max";
  }
  return false;
}
