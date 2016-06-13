# investigate-mapnik-karma-tostring

Submitted to Microsoft Connect: https://connect.microsoft.com/VisualStudio/feedback/details/2809804/c-optimization-bug

Maybe related: [Microsoft Connect: Possible C++ optimization bug](https://connect.microsoft.com/VisualStudio/Feedback/Details/2696521)

Corresponding mapnik issue: https://github.com/mapnik/mapnik/issues/3437

------

Tested with 
* `Visual Studio 2015 Update 2` and 
* [`Visual Studio Update 3 RC`](https://msdn.microsoft.com/vs-knownissues/vs2015-update3-rc)

------

* open solution
* run

output:
```
5 => 5
4 => 4
3 => 3
2 => 2
1 => 1
0 => 0
-1 => -4294967295
-2 => -4294967294
-3 => -4294967293
-4 => -4294967292
-5 => -4294967291
```

* turn off optimization 
  * `Properties -> Configuration Properties -> C/C++ -> Optimization -> Optimization: Disabled (/Od)`
* run

output:
```
5 => 5
4 => 4
3 => 3
2 => 2
1 => 1
0 => 0
-1 => -1
-2 => -2
-3 => -3
-4 => -4
-5 => -5
```
