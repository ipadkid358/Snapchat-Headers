/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:51 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SCStickerManagerUtils : NSObject
+(id)emojiFromHexString:(id)arg1 ;
+(id)hexStringFromEmoji:(id)arg1 ;
+(id)absolutePathForPath:(id)arg1 ;
+(BOOL)createFolder:(id)arg1 ;
+(BOOL)saveData:(id)arg1 destination:(id)arg2 ;
+(BOOL)unzipData:(id)arg1 destination:(id)arg2 ;
+(void)downloadFileWithURL:(id)arg1 performer:(id)arg2 retryCount:(long long)arg3 completionBlock:(/*^block*/id)arg4 ;
+(void)listDirectory:(id)arg1 ;
+(id)emojiFromHexStringWithoutReadding:(id)arg1 ;
+(void)_retryDownloadFileWithUrl:(id)arg1 performer:(id)arg2 retryCount:(long long)arg3 completionBlock:(/*^block*/id)arg4 ;
+(void)listRootPath;
+(BOOL)deviceDoesSupportEmoji:(id)arg1 ;
+(BOOL)removeFile:(id)arg1 ;
+(id)rootPath;
@end

