/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:15 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SCThumbnailUploadInfo : NSObject {

	BOOL _commitDidSucceed;
	NSString* _snapId;
	unsigned long long _reuploadTrigger;
	unsigned long long _gcsUploadStatus;

}

@property (nonatomic,readonly) NSString * snapId;                             //@synthesize snapId=_snapId - In the implementation block
@property (assign,nonatomic) unsigned long long reuploadTrigger;              //@synthesize reuploadTrigger=_reuploadTrigger - In the implementation block
@property (assign,nonatomic) unsigned long long gcsUploadStatus;              //@synthesize gcsUploadStatus=_gcsUploadStatus - In the implementation block
@property (assign,nonatomic) BOOL commitDidSucceed;                           //@synthesize commitDidSucceed=_commitDidSucceed - In the implementation block
-(NSString *)snapId;
-(id)initWithSnapId:(id)arg1 ;
-(unsigned long long)reuploadTrigger;
-(void)setReuploadTrigger:(unsigned long long)arg1 ;
-(unsigned long long)gcsUploadStatus;
-(void)setGcsUploadStatus:(unsigned long long)arg1 ;
-(BOOL)commitDidSucceed;
-(void)setCommitDidSucceed:(BOOL)arg1 ;
@end
