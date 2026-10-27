//关于github使用步骤

//1.第一次使用，初始化git
git init

//显示文件是否添加
git status

//添加指定文件
//添加的文件要跟git bash在同一目录中打开
git add 文件名称//添加指定文件
git add .//添加当前位置的所有文件

//提交更改指令
git commit -m"写入对应指令"

//推送代码到GitHub
//注意main和master要和git bash的对应
git push -u origin main//第一次推送加u，绑定分支
git push origin main

//想要删除github的文件
git rm -r --cached 文件名//-r表示删除文件夹
git rm --cached 文件名//表示删除文件

//删除也要提交推送
git commit -m "删除远程的编译产物，"
git push origin main

//新建文件，第一次要绑定github
git init
//然后绑定远程仓库
git remote add origin git@github.com:zjm2005111/c-study.git

//本地把master重命名为main
git branch - M main
//然后推送main
git push - u origin main --force
