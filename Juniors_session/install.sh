cd ~
mkdir tetfiles && cd tetfiles
curl https://raw.githubusercontent.com/aswanthabam/Termux-Executer/main/script > script
chmod +x ./script && cp ./script /data/data/com.termux/files/usr/bin/run
echo "Installed successfully: run 'run' to start"
echo "Help:-"
run
cd ..
rm -rf tetfiles
