/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:10 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface SCBitmojiDownloadQueue : NSObject {

	NSMutableArray* _stack;

}
-(id)_stableSortStackByScore:(id)arg1 ;
-(void)_seekAndDestroy:(id)arg1 ;
-(unsigned long long)_scoreJob:(id)arg1 contexts:(id)arg2 ;
-(BOOL)allowPrefetching;
-(void)queueJob:(id)arg1 ;
-(void)removeJob:(id)arg1 ;
-(id)retrieveJobsWithContexts:(id)arg1 maxSize:(unsigned long long)arg2 ;
-(id)init;
-(unsigned long long)length;
@end
