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

#include "klassenbuchmagicview.h"
#include "KlassenbuchMagicSettings.h"

KlassenbuchMagicView::KlassenbuchMagicView(QWidget *parent)
    : QWidget(parent)
{
    m_ui.setupUi(this);
    slotSettingsChanged();
}

KlassenbuchMagicView::~KlassenbuchMagicView()
{
}

void KlassenbuchMagicView::slotSwitchColors()
{
    // switch the foreground/background colours of the label
    QColor color = KlassenbuchMagicSettings::color_background();
    KlassenbuchMagicSettings::setColor_background( KlassenbuchMagicSettings::color_foreground() );
    KlassenbuchMagicSettings::setColor_foreground( color );

    slotSettingsChanged();
}

void KlassenbuchMagicView::slotSettingsChanged()
{
    qCDebug(KLASSENBUCHMAGIC) << "KlassenbuchMagicView::slotSettingsChanged()";
    QPalette palette;
    palette.setColor( QPalette::Window, KlassenbuchMagicSettings::color_background());
    palette.setColor( QPalette::WindowText, KlassenbuchMagicSettings::color_foreground());
    m_ui.templateLabel->setPalette( palette );

    // i18n : internationalization
    m_ui.templateLabel->setText( i18n("This project is %1 days old", KlassenbuchMagicSettings::val_time()) );
    emit signalChangeStatusbar( i18n("Settings changed") );
}

#include "klassenbuchmagicview.moc"
