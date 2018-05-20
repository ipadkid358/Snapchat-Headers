/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:28 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCCachingMediaSimpleEntity.h>

@class SCBaseChatMedia, NSString;

@interface SCCachingMediaChatMediaVideo : NSObject <SCCachingMediaSimpleEntity> {

	SCBaseChatMedia* _chatMediaVideo;
	CGSize _targetSize;
	NSString* _UUID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cachingMediaManager:(id)arg1 sourceImagesResultHandler:(/*^block*/id)arg2 ;
-(id)initWithChatMedia:(id)arg1 targetSize:(CGSize)arg2 ;
-(id)UUID;
-(unsigned long long)imageFormat;
@end
