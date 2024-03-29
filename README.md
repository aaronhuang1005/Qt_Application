# 基於Qt creator 的小應用

:::info
這是利用 Qt 撰寫的一個 C++ 的小計算機，當然專注的是Qt中物件的互動，計算機的演算法(先乘除後加減以及括號)就暫時被忽略。\
**本篇以及這個小應用不討論中序&後序運算等相關內容。**\
\
做出來的UI成果：

![image](https://hackmd.io/_uploads/BJoRga3hT.png)

*Github的位置*：[Qt_Application](https://github.com/aaronhuang1005/Qt_Application)
:::

## 物件的建立

看大部分專案有用 Generate form 的 UI (.ui)編輯控制頁面物件，再利用"轉到槽"的功能讓 Qt 自動產生訊號與相應動作的連結\
另外也有純用程式直接指定物件位置，利用`connect()`函式連結物件的訊號以及相應的 slot(signal 跟 slot 的連結)。\
上述在示例練習的時候覺得個有優缺：

- 利用Generate form可以很方便地操作頁面的物件位置，但"轉到槽"的功能相對不穩定，程式會跳Warnning，且往後修改物件的名稱或是相關動作甚至要編輯cmake編譯文件的內容，相當不方便。
- 而純程式撰寫可以解決上述問題，連結物件信號跟 slot 函式也很簡單方便，但物件的編輯就要一行一行來，部署物件也要另外撰寫，相當費時。

因此利用地個小小的專題試著把兩者連結，利用 UI 將物件創立好，引入後物件便可以在ui介面物件中呼叫，再利用上述的`connect()`連結訊號

## 小小彩蛋

這個算是小小的練習，當然內容也就不會跟功能有太多的關係，但裡面有放一些在寫的時候怕無聊的小彩蛋\
如果你有興趣，可以試著探索，在這個專案 Github 中 release 分支中有一個 qt_application.exe 可以執行，即是這個小專案的小成果\
嗯...看程式碼就不好玩了呵呵