/*
Copyright (C) 2016 by Richard Stöckl <richard.stoeckl@aon.at>

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License as
published by the Free Software Foundation; either version 2 of
the License or (at your option) version 3 or any later version
accepted by the membership of KDE e.V. (or its successor approved
by the membership of KDE e.V.), which shall act as a proxy
defined in Section 14 of version 3 of the license.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

// application header
#include "klassenbuchmagic.h"
// KDE headers
#include <QApplication>
#include <QCommandLineParser>
#include <QIcon>
#include <KAboutData>
#include <KLocalizedString>
#include <QtCore/QLoggingCategory>

Q_DECLARE_LOGGING_CATEGORY(KLASSENBUCHMAGIC)
Q_LOGGING_CATEGORY(KLASSENBUCHMAGIC, "klassenbuchmagic")
int main(int argc, char **argv)
{
    QApplication application(argc, argv);

    KLocalizedString::setApplicationDomain("klassenbuchmagic");
    KAboutData aboutData( QStringLiteral("klassenbuchmagic"),
                          i18n("Klassenbuch Scanner"),
                          QStringLiteral("0.1"),
                          i18n("Ein kleines Programm um Daten aus einem Klassenbuchblatt auszuwerten"),
                          KAboutLicense::GPL,
                          i18n("(c) 2016, Richard Stöckl <richard.stoeckl@aon.at>"), i18n("Dennis Toth"));

    aboutData.addAuthor(i18n("Richard Stöckl"),i18n("Author"), QStringLiteral("richard.stoeckl@aon.at"));
    aboutData.addAuthor(i18n("Dennis Toth"), i18n("Author"), QStringLiteral("tot16398@spengergasse.at"));
    aboutData.addAuthor(i18n("Guido Schreier"), i18n("Author"), QStringLiteral("sch16340@spengergasse.at"));
    aboutData.addAuthor(i18n("Luca Sanda"), i18n("Author"), QStringLiteral("san16333@spengergasse.at"));
    application.setWindowIcon(QIcon::fromTheme("addressbook"));
    QCommandLineParser parser;
    parser.addHelpOption();
    parser.addVersionOption();
    aboutData.setupCommandLine(&parser);
    parser.process(application);
    aboutData.processCommandLine(&parser);
    KAboutData::setApplicationData(aboutData);

    KlassenbuchMagic *appwindow = new KlassenbuchMagic;
    appwindow->show();
    return application.exec();
}
