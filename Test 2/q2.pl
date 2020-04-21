$globalVar = 10;

sub returnGlobalVar {
    return $globalVar;
}

sub static{
    my $globalVar = 2;
    return returnGlobalVar();
}

sub dynamic{
    local $globalVar = 2;
    return returnGlobalVar();
}

print static();
print "\n";
print dynamic();