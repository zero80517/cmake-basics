# basic-starting-point

To compile use

```bash
$ mkdir ../basic-starting-point-build
$ cd ../basic-starting-point-build
$ cmake ../basic-starting-point
$ cmake --build .
```

There will be created executable file ```Tutorial``` in the  ```basic-starting-point-build```

If you updated sources than it's preferable to delete build (https://stackoverflow.com/questions/14458805/editing-versus-deleting-cmakecache-txt-after-moving-directory) by using (in the ```basic-starting-point-build``` folder) (https://askubuntu.com/questions/740805/how-can-i-remove-all-files-from-current-directory-using-terminal)

```bash
$ rm -r *
```

Then compile as above.
