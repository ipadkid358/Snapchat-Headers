/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:46 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVAssetDownloadDelegate <NSURLSessionTaskDelegate>
@optional
-(void)URLSession:(id)arg1 aggregateAssetDownloadTask:(id)arg2 willDownloadToURL:(id)arg3;
-(void)URLSession:(id)arg1 aggregateAssetDownloadTask:(id)arg2 didCompleteForMediaSelection:(id)arg3;
-(void)URLSession:(id)arg1 aggregateAssetDownloadTask:(id)arg2 didLoadTimeRange:(SCD_Struct_BC197)arg3 totalTimeRangesLoaded:(id)arg4 timeRangeExpectedToLoad:(SCD_Struct_BC197)arg5 forMediaSelection:(id)arg6;
-(void)URLSession:(id)arg1 assetDownloadTask:(id)arg2 didLoadTimeRange:(SCD_Struct_BC197)arg3 totalTimeRangesLoaded:(id)arg4 timeRangeExpectedToLoad:(SCD_Struct_BC197)arg5;
-(void)URLSession:(id)arg1 assetDownloadTask:(id)arg2 didResolveMediaSelection:(id)arg3;
-(void)URLSession:(id)arg1 assetDownloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;

@end

