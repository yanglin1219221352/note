git init //使一个文件变为可用git管理的文件
git clone +库  例git@github.com:yanglin1219221352/node.git
                对其进行划分应该为git(相当方式)@github.com:xxx/xx.git(相当于地址)
git pull  可能会遇到拒绝合并的错误，原因使本地库和github上的库没有相关历史。
          解决方法 $git pull origin master --allow-unrelated-histories
git commit 之前需要绑定仓库的使用者和邮箱(使用git config)
git config 其中有一参数 --global 网上查找资料原因是该机器所有仓库都会使用这个名字，但是我曾在其他仓库使用过，却还要再另外一个仓库使用一次，这点存疑