/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:38 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCLensDownloadOperationV2.h>

@class SCLensURLDataFetcher;

@interface SCLensFilterOverlayImageDownloadingOperation : SCLensDownloadOperationV2 {

	SCLensURLDataFetcher* _urlDataFetcher;

}

@property (nonatomic,retain) SCLensURLDataFetcher * urlDataFetcher;              //@synthesize urlDataFetcher=_urlDataFetcher - In the implementation block
-(void)executeWithSettings:(id)arg1 ;
-(void)boostWithSettings:(id)arg1 ;
-(SCLensURLDataFetcher *)urlDataFetcher;
-(void)setUrlDataFetcher:(SCLensURLDataFetcher *)arg1 ;
-(void)processDataFetcherResponseForUrl:(id)arg1 contentPath:(id)arg2 cached:(BOOL)arg3 inputSettings:(id)arg4 error:(id)arg5 ;
-(id)initWithLens:(id)arg1 requestTiming:(long long)arg2 urlDataFetcher:(id)arg3 ;
-(void)finishWithResult:(id)arg1 ;
@end
