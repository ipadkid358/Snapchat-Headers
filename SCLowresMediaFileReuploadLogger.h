/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:15 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCPerforming;
@class NSMutableDictionary;

@interface SCLowresMediaFileReuploadLogger : NSObject {

	id<SCPerforming> _performer;
	NSMutableDictionary* _snapIdToThumbnailInfo;

}
-(id)initWithPerformer:(id)arg1 ;
-(void)commitUpdatedThumbnailForSnapId:(id)arg1 didSucceed:(BOOL)arg2 ;
-(void)uploadThumbnailForSnapId:(id)arg1 didReceivedGcsResponse:(unsigned long long)arg2 ;
-(void)_logWithThumbnailInfo:(id)arg1 ;
-(void)uploadThumbnailForSnapId:(id)arg1 triggeredBy:(unsigned long long)arg2 ;
@end

