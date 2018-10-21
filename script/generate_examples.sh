#!/usr/bin/env bash

EXS_DIR="$(dirname $0)/../examples/generated"
mkdir -p "$EXS_DIR"

declare -a CORE=(ALPHA BIT CHAR CR CRLF CTL DIGIT DQUOTE HEXDIG HTAB LF LWSP OCTET SP VCHAR WSP)
for c in ${CORE[@]}; do
    echo -en "start = ${c}\r\n" > "${EXS_DIR}/core_${c}.abnf"
done
