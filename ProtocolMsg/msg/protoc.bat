@echo off

.\Convert\AutoDBGen -p .\Convert\crtServer.sql .\Convert\pddclient.sql .\Convert\crebas.sql -m transMsg -d ./gen -o copy([SJ_(.+)][DS_$1]) copy([SJ_(.+)][GC_$1]) copy([JD_(.+)][LS_$1]) copy([JD_(.+)][ZB_$1]) sep([SJ_.+][msg-SJ]) sep([DS_.+][msg-DS]) sep([GC_.+][msg-GC]) sep([JD_.+][msg-JD]) sep([LS_.+][msg-LS]) sep([GL_.+][msg-GL]) sep([SV_.+][msg-SV]) sep([ZB_.+][msg-ZB]) sep([JK_.+][msg-JK]) -r [.][.+\.proto][./gen]


BC2 @BC2.sc
pause
@echo on