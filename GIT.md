GIT 使用说明介绍（含 MD说明）：
----------------------
----------------------

### GIT 使用说明：  
*********
#web页面操作：
    注册账户，添加repository ，initialize the readme.md
    
#pc端：git bash 初始及setting
    
    1.运行$ssh -T git@github.com 查看是否hi, yourname....绑定git至你的pc gitbash账户 （账户设置见下方）
    成功则，进入 代码添加.否则不成功进入 下一项2.
    2.cd ~
    3.cd .ssh  
      注意是 cd 空格 （进入.ssh的目录）
    4.ssh-keygen -t rsa -C "your_email@youremail.com"
      注意此处有设置密码，可以全面回车  enter
    5.ls      查看是否有一个 id_rsa.pub 的文件.cat id_rsa.pub
    6.notepad id_rsa.pub 
      使用记事本打开  Ctrl + a 全选；再ctrl + c 复制
    
    切换到浏览器 Github 页面窗口  
    7. 右上角有你的名字，旁边有3个图标。点击第2个图标，Account Settting 左侧顺数第7个选项 SSH Keys ，点击进入 Add SSH Key
    填写 title: git bash填写key:  ctrl + v 粘贴 (就是刚才的 .pub 文件内容) 密码： github 网站的密码
    回到 Git Bash 窗口
    8.关闭notepad
    9.重新ssh -T git@github.com 此时应该成功 hi yourname......

#配置自己的git bash pc端
    1. cd ~     
    2.1 git config  --global user.name xxx
    2.2 git config  --global user.email  xxx@xxx.com
    2.3 (这一步不是必须要做的，如果有问题可以做) git config  --global push.default simple

#添加文件或项目至git
  1.cd ~
  2.mkdir github
  3.cd github
  4.git clone git@github.com:limingth/myNCCL.git
  
  5.cd myNCCL
  5.1 edit hell.c
    注意此时使用git status 查看文件状态，并有下一步的提醒： 文件状态等 untracked modified unstage
  
  6.git add hello.c
  7.git commit -a -m "add hello.c"
  8.git push
    可以使用git status 查看状态   修改一下 hello.c ，然后重复 6，7 两步即可
  8. 如果要添加大量代码，可以用 git add .
  9. 如果要删除某个文件，可以用 git rm a.c
    
      ps：如果 在web上面修改后 本地也做了修改但是没有上传push。此时操作为
          1.先git pull 最新的下来，再合并提交。push...
      
