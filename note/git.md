git 功能应该只能在含有.git的文件的文件夹里进行
git init //使一个文件变为可用git管理的文件
git clone +库  例git@github.com:yanglin1219221352/node.git
                对其进行划分应该为git(相当方式)@github.com:xxx/xx.git(相当于地址)
git pull  可能会遇到拒绝合并的错误，原因使本地库和github上的库没有相关历史。
          解决方法 $git pull origin master --allow-unrelated-histories
git commit 之前需要绑定仓库的使用者和邮箱(使用git config)
git config 其中有一参数 --global 网上查找资料原因是该机器所有仓库都会使用这个名字，但是我曾在其他仓库使用过，却还要再另外一个仓库使用一次，这点存疑
git commit 提交时可以（也应当要添加注释) 最好使用git commit -m "注释" 的形式(四个参数都不能少);
git pull origin 中origin 需要自己添加  可以通过 get remote -v 来看远程连接了地址
git remote -v：                查看远程仓库详细信息，可以看到仓库名称

git remote remove orign：      删除orign仓库（如果把origin拼写成orign，删除错误名称仓库）

git remote add origin 仓库地址：     重新添加远程仓库地址

git push -u origin master：         提交到远程仓库的master主干
git config --global core.editor vim 通过如下的命令把它设置为vim编辑器
git diff(在文件)