# Based off original GNOME 2 applet build files copyright:
#
# 2003-2007 Ole Laursen <olau@hardworking.dk>
#
# XFCE4 modifications copyright:
#
# 2013, 2016-2018 OmegaPhil (OmegaPhil@startmail.com)


# Defining libraries to be built and their installation destination
plugindir = $(libdir)/xfce4/panel/plugins
plugin_LTLIBRARIES = libnmt.la

# List of source files needed to build the library
libnmt_la_SOURCES = \
                      AppInfos.cpp AppInfos.hpp \
                      Config.cpp Config.hpp \
                      Group.cpp Group.hpp \
                      GroupWindow.cpp GroupWindow.hpp \
                      Helpers.cpp Helpers.hpp \
                      Plugin.cpp Plugin.hpp \
                      Taskbar.cpp Taskbar.hpp \
                      Wnck.cpp Wnck.hpp \
                      register.c

libnmt_la_LDFLAGS = \
                      -avoid-version \
                      -module \
                      -no-undefined \
    -export-symbols-regex '^xfce_panel_module_(preinit|init|construct)'


libnmt_la_CPPFLAGS = \
                        @LIBXFCE4PANEL_CFLAGS@ \
                        @LIBXFCE4UI_CFLAGS@

libnmt_la_LIBADD = \
                        @LIBXFCE4PANEL_LIBS@ \
                        @LIBXFCE4UI_LIBS@ \
                        $(GTKMM_LIBS) \
						$(WNCK_LIBS)


# Recently (>=2017) dependent libraries seem to require building with
# the C++11 standard (see https://bugzilla.xfce.org/show_bug.cgi?id=13717)
# - this results in errors with GCC 5 and below when building with
# default configuration - 4.9.2 is bundled with Debian Jessie (2015),
# presumably when 2020 comes around I can consider addition of the std
# flag deprecated
AM_CXXFLAGS = -DWNCK_I_KNOW_THIS_IS_UNSTABLE $(GTKMM_CFLAGS) $(WNCK_CFLAGS) $(SENSORS_CFLAGS) --std=c++11