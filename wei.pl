#!/usr/bin/perl
$line = <STDIN>;
print "input is $line \n";
if($line eq "\n") {
    print "that is a blank line \n";
}
else{
    print "that line of input was $line \n";
}

