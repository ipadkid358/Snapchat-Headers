/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:18 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCVersionResourceDownloaderStateChangeDelegate <NSObject>
@optional
-(void)didFailCheckingUpdateWithDownloader:(id)arg1;
-(void)didFailVerifyingFileContentWithDownloader:(id)arg1;
-(void)didFailDownloadingFileBlobWithDownloader:(id)arg1;

@required
-(void)versionResourceDownloader:(id)arg1 didCheckUpdateAvailable:(BOOL)arg2 metadata:(id)arg3;
-(void)versionResourceDownloader:(id)arg1 didDownloadFileBlob:(id)arg2;
-(void)versionResourceDownloader:(id)arg1 didVerifyFileContent:(id)arg2 didSaveToDisk:(id)arg3;

@end

