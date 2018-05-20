/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:15 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SCCloudSyncOperationSnapChangLogContext : NSObject {

	BOOL _isFromRetry;
	NSString* _snapId;
	NSString* _mediaId;
	NSString* _entryId;

}

@property (nonatomic,readonly) NSString * snapId;               //@synthesize snapId=_snapId - In the implementation block
@property (nonatomic,readonly) NSString * mediaId;              //@synthesize mediaId=_mediaId - In the implementation block
@property (nonatomic,readonly) NSString * entryId;              //@synthesize entryId=_entryId - In the implementation block
@property (nonatomic,readonly) BOOL isFromRetry;                //@synthesize isFromRetry=_isFromRetry - In the implementation block
+(id)snapChangeLogWithSnapId:(id)arg1 mediaId:(id)arg2 entryId:(id)arg3 isFromRetry:(BOOL)arg4 ;
-(NSString *)snapId;
-(NSString *)entryId;
-(BOOL)isFromRetry;
-(NSString *)mediaId;
@end

