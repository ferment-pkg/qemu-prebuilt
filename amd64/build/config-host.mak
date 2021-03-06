# Automatically generated by configure - do not modify

all:
GIT=git
GIT_SUBMODULES=ui/keycodemapdb tests/fp/berkeley-testfloat-3 tests/fp/berkeley-softfloat-3 dtc capstone
GIT_SUBMODULES_ACTION=update
ARCH=x86_64
STRIP=strip
CONFIG_POSIX=y
CONFIG_DARWIN=y
CONFIG_TOOLS=y
CONFIG_SLIRP_SMBD=y
CONFIG_SMBD_COMMAND="/usr/sbin/smbd"
CONFIG_VDE=y
VDE_LIBS=-lvdeplug
CONFIG_AUDIO_DRIVERS=coreaudio sdl
CONFIG_AUDIO_COREAUDIO=y
CONFIG_AUDIO_SDL=y
ALSA_LIBS=
ALSA_CFLAGS=
PULSE_LIBS=
PULSE_CFLAGS=
COREAUDIO_LIBS=-framework CoreAudio
DSOUND_LIBS=
OSS_LIBS=
JACK_LIBS=
CONFIG_BDRV_RW_WHITELIST=
CONFIG_BDRV_RO_WHITELIST=
PKGVERSION=
SRC_PATH=/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu
TARGET_DIRS=aarch64-softmmu alpha-softmmu arm-softmmu avr-softmmu cris-softmmu hppa-softmmu i386-softmmu m68k-softmmu microblaze-softmmu microblazeel-softmmu mips-softmmu mips64-softmmu mips64el-softmmu mipsel-softmmu nios2-softmmu or1k-softmmu ppc-softmmu ppc64-softmmu riscv32-softmmu riscv64-softmmu rx-softmmu s390x-softmmu sh4-softmmu sh4eb-softmmu sparc-softmmu sparc64-softmmu tricore-softmmu x86_64-softmmu xtensa-softmmu xtensaeb-softmmu
CONFIG_GIO=y
GIO_CFLAGS=-I/usr/local/include -I/usr/local/include/glib-2.0 -I/usr/local/lib/glib-2.0/include -I/usr/local/include/gio-unix-2.0 -I/usr/local/include -I/usr/local/include/glib-2.0 -I/usr/local/lib/glib-2.0/include
GIO_LIBS=-L/usr/local/lib -lgio-2.0 -lgobject-2.0 -lglib-2.0 -lintl -L/usr/local/lib -lgio-2.0 -lgobject-2.0 -lglib-2.0 -lintl
GDBUS_CODEGEN=/usr/local/bin/gdbus-codegen
CONFIG_TLS_PRIORITY="NORMAL"
CONFIG_IOVEC=y
CONFIG_BSD=y
CONFIG_QOM_CAST_DEBUG=y
CONFIG_COROUTINE_BACKEND=sigaltstack
CONFIG_COROUTINE_POOL=1
CONFIG_CPUID_H=y
CONFIG_INT128=y
CONFIG_CMPXCHG128=y
CONFIG_ATOMIC64=y
CONFIG_LIBSSH=y
LIBSSH_CFLAGS=-I/usr/local/Cellar/libssh/0.9.6/include
LIBSSH_LIBS=-L/usr/local/Cellar/libssh/0.9.6/lib -lssh
CONFIG_LIVE_BLOCK_MIGRATION=y
CONFIG_TPM=y
TRACE_BACKENDS=log
CONFIG_TRACE_LOG=y
CONFIG_TRACE_FILE=trace
CONFIG_REPLICATION=y
CONFIG_THREAD_SETNAME_BYTHREAD=y
CONFIG_PTHREAD_SETNAME_NP_WO_TID=y
CONFIG_BOCHS=y
CONFIG_CLOOP=y
CONFIG_DMG=y
CONFIG_QCOW1=y
CONFIG_VDI=y
CONFIG_VVFAT=y
CONFIG_QED=y
CONFIG_PARALLELS=y
HAVE_MLOCKALL=y
CONFIG_PLUGIN=y
CONFIG_HAS_LD_EXPORTED_SYMBOLS_LIST=yes
ROMS=
MAKE=make
PYTHON=/usr/local/opt/python@3.8/bin/python3 -B
GENISOIMAGE=
MESON=/Library/Frameworks/Python.framework/Versions/3.9/bin/meson
NINJA=/usr/local/bin/ninja
CC=cc
HOST_CC=cc
AR=ar
AS=as
CCAS=cc
CPP=cc -E
OBJCOPY=objcopy
LD=ld
CFLAGS_NOPIE=
QEMU_CFLAGS=-m64 -mcx16 -DOS_OBJECT_USE_OBJC=0 -D_GNU_SOURCE -D_FILE_OFFSET_BITS=64 -D_LARGEFILE_SOURCE -Wstrict-prototypes -Wredundant-decls -Wundef -Wwrite-strings -Wmissing-prototypes -fno-strict-aliasing -fno-common -fwrapv  -DNCURSES_WIDECHAR=1 -Wold-style-definition -Wtype-limits -Wformat-security -Wformat-y2k -Winit-self -Wignored-qualifiers -Wempty-body -Wnested-externs -Wendif-labels -Wexpansion-to-defined -Wno-initializer-overrides -Wno-missing-include-dirs -Wno-shift-negative-value -Wno-string-plus-int -Wno-typedef-redefinition -Wno-tautological-type-limit-compare -Wno-psabi -fstack-protector-strong
QEMU_CXXFLAGS= -D__STDC_LIMIT_MACROS -D__STDC_CONSTANT_MACROS -D__STDC_FORMAT_MACROS -m64 -mcx16 -DOS_OBJECT_USE_OBJC=0 -D_GNU_SOURCE -D_FILE_OFFSET_BITS=64 -D_LARGEFILE_SOURCE -Wundef -Wwrite-strings -fno-strict-aliasing -fno-common -fwrapv -DNCURSES_WIDECHAR=1 -Wtype-limits -Wformat-security -Wformat-y2k -Winit-self -Wignored-qualifiers -Wempty-body -Wendif-labels -Wexpansion-to-defined -Wno-initializer-overrides -Wno-missing-include-dirs -Wno-shift-negative-value -Wno-string-plus-int -Wno-typedef-redefinition -Wno-tautological-type-limit-compare -Wno-psabi -fstack-protector-strong
GLIB_CFLAGS=-I/usr/local/include -I/usr/local/include/glib-2.0 -I/usr/local/lib/glib-2.0/include
GLIB_LIBS=-L/usr/local/lib -lgmodule-2.0 -lglib-2.0 -lintl
QEMU_LDFLAGS=-m64  -DNCURSES_WIDECHAR=1 -fstack-protector-strong
LD_I386_EMULATION=
EXESUF=
HOST_DSOSUF=.dylib
LIBS_QGA=
FUZZ_EXE_LDFLAGS=
CONFIG_QEMU_INTERP_PREFIX=/usr/gnemul/qemu-@0@
CONFIG_DEFAULT_TARGETS=y
