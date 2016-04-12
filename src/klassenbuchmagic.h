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

#ifndef KLASSENBUCHMAGIC_H
#define KLASSENBUCHMAGIC_H

#include <QLoggingCategory>
#include <KXmlGuiWindow>

#include "ui_klassenbuchmagicViewBase.h"
#include "ui_settingsBase.h"
#include "KlassenbuchMagicSettings.h"
#include "klassenbuchmagicview.h"

Q_DECLARE_LOGGING_CATEGORY(KLASSENBUCHMAGIC)

/**
 * This class serves as the main window for klassenbuchmagic.  It handles the
 * menus, toolbars and status bars.
 *
 * @short Main window class
 * @author Your Name <mail@example.com>
 * @version 0.1
 */
class KlassenbuchMagic : public KXmlGuiWindow
{
    Q_OBJECT
public:
    /**
     * Default Constructor
     */
    KlassenbuchMagic();

    /**
     * Default Destructor
     */
    virtual ~KlassenbuchMagic();

private slots:
    /**
     * Create a new window
     */
    void fileNew();

    /**
     * Open the settings dialog
     */
    void settingsConfigure();

private:
    // this is the name of the root widget inside our Ui file
    // you can rename it in designer and then change it here
    Ui::settingsBase settingsBase;
    Ui::klassenbuchmagicViewBase klassenbuchmagicViewBase;
    QAction *m_switchAction;
    KlassenbuchMagicView *m_klassenbuchmagicView;
};

#endif // _KLASSENBUCHMAGIC_H_
