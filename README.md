<div align="center">
    <img src="https://img.icons8.com/color/80/000000/c-programming.png" alt="Logo" width="80" height="80">
  

  <h3 align="center">A Simple Kernel made with C</h3>
</div>


## Tech Stack  🔬

**C**

**Assembly Language**

## Requirements 🔍

- **Any Linux Enviroment**

- **gcc compiler**

- **qemu-system-x86_64**

-  **grub-mkrescue**

- **Xorriso**









## Run on your PC 🔮

Clone the project

```bash
  git clone https://github.com/adithyapaib/Ckernel/
```

Go to the project directory

```bash
  cd Ckernel
```


Go to the project directory

```bash
  chmod 777 run.sh
  sudo ./run.sh
```






## Documentation 📰

#### Files and functions
- **boot.s**   :  This is the multiboot bootloader file.
- **grub.cfg** :  This is the grub configuration file used by the bootloader to boot the OS.
- **kernel.c** :  This is the main C file , This program exports the The message into the VGA buffer
- **kernel.h** :  This is the custom header file with 3 custom data type made with typedef.
- **linked.ld**:  This is the linker file that links the various files of the project.
- **run.sh**   :  This is the bash script that is made so that it becomes super easy for the user to compile, build, link and run the kernel.



## Screenshots 📸

![App Screenshot](https://github.com/adithyapaib/Ckernel/blob/main/img/ss1.png)
![App Screenshot](https://github.com/adithyapaib/Ckernel/blob/main/img/ss2.png)




## License 📜

[MIT](https://choosealicense.com/licenses/mit/)


