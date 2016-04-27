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

#ifndef SCHUELER_H
#define SCHUELER_H

#include <iostream>

using namespace std;

class Schueler
{
public:
    Schueler();
    Schueler(const Schueler& other);
    ~Schueler();
    Schueler& operator=(const Schueler& other);
    bool operator==(const Schueler& other) const;
    string getNummer();
    string getNachname();
    string getVorname();
private:
    string nummer;
    string nachname;
    string vorname;
};

#endif // SCHUELER_H