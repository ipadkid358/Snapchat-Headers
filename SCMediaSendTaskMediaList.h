/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:27 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class SCQueuePerformer, NSArray, NSMutableSet;

@interface SCMediaSendTaskMediaList : NSObject <NSCoding> {

	SCQueuePerformer* _performer;
	BOOL _uploading;
	/*^block*/id _uploadCompletionBlock;
	unsigned long long _indexOfMediaToUpload;
	unsigned long long _numberOfMediaBeingUploaded;
	unsigned long long _numberOfMediaSucceededToUpload;
	unsigned long long _numberOfMediaFailedToUpload;
	NSArray* _uploadableChatMediaList;
	NSMutableSet* _mediaIDsOfMediaDataLost;

}

@property (nonatomic,copy,readonly) NSArray * uploadableChatMediaList;                   //@synthesize uploadableChatMediaList=_uploadableChatMediaList - In the implementation block
@property (nonatomic,copy,readonly) NSMutableSet * mediaIDsOfMediaDataLost;              //@synthesize mediaIDsOfMediaDataLost=_mediaIDsOfMediaDataLost - In the implementation block
-(NSArray *)uploadableChatMediaList;
-(void)finishDecodingWithPerformer:(id)arg1 ;
-(void)uploadWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)chatMediaInputArray;
-(id)chatMediaContentProviders;
-(NSMutableSet *)mediaIDsOfMediaDataLost;
-(id)initWithUploadableChatMediaList:(id)arg1 performer:(id)arg2 ;
-(void)_fireUpload;
-(void)_completeUpload;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

