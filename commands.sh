#!/bin/bash

export UTBOT_VERSION="1.0.1"
mkdir utbot-release-$UTBOT_VERSION
cd utbot-release-$UTBOT_VERSION
wget https://github.com/slawa4s/UTBotCpp/releases/download/v$UTBOT_VERSION/utbot-release-$UTBOT_VERSION.zip
    # wget https://github.com/UnitTestBot/UTBotCpp/releases/download/v$UTBOT_VERSION/utbot-release-$UTBOT_VERSION.zip
unzip utbot-release-$UTBOT_VERSION.zip
chmod +x unpack_and_run_utbot.sh
./unpack_and_run_utbot.sh
#cd utbot-release-$UTBOT_VERSION/utbot_distr/
     cd utbot_distr/

export CURRENT_FOLDER="$( cd $( dirname ${BASH_SOURCE[0]} ) && pwd )"
RUN_SYSTEM_SCRIPT_PATH=$CURRENT_FOLDER/utbot_run_system.sh
UTBOT_CLI_OPTIONS="generate --project-path /home/slawa4s/utbot-git-action project"
$RUN_SYSTEM_SCRIPT_PATH "cli" $UTBOT_CLI_OPTIONS