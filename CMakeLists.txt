cmake_minimum_required(VERSION 2.6)
project(em)
include_directories("${PROJECT_SOURCE_DIR}")
add_definitions(-DAUTOCONF -DPOSIX -DSYSV -D_DARWIN_C_SOURCE -D_BSD_SOURCE -D_SVID_SOURCE -D_XOPEN_SOURCE=600)
add_executable(em main.c buffer.c ansi.c basic.c bind.c crypt.c display.c eval.c exec.c file.c fileio.c globals.c ibmpc.c input.c isearch.c line.c lock.c names.c pklock.c posix.c random.c region.c search.c spawn.c tcap.c termio.c usage.c utf8.c version.c vmsvt.c vt52.c window.c word.c wrapper.c)
target_link_libraries(em ncurses)

install(TARGETS em DESTINATION /usr/local/bin)