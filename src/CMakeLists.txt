set( klassenbuchmagic_SRCS
    main.cpp
    klassenbuchmagic.cpp
    klassenbuchmagicview.cpp
)

kconfig_add_kcfg_files(klassenbuchmagic_SRCS KlassenbuchMagicSettings.kcfgc)
ki18n_wrap_ui(klassenbuchmagic_SRCS klassenbuchmagicViewBase.ui settingsBase.ui)

add_executable( klassenbuchmagic ${klassenbuchmagic_SRCS} )

target_link_libraries( klassenbuchmagic
    Qt5::Widgets
    KF5::CoreAddons
    KF5::I18n
    KF5::XmlGui
    KF5::ConfigWidgets
    libklassenbuchmagic
)

install( TARGETS klassenbuchmagic ${INSTALL_TARGETS_DEFAULT_ARGS} )
install( PROGRAMS klassenbuchmagic.desktop  DESTINATION ${XDG_APPS_INSTALL_DIR} )
install( FILES klassenbuchmagicui.rc DESTINATION ${KXMLGUI_INSTALL_DIR}/klassenbuchmagic )
