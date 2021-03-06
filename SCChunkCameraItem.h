/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:33 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCChunkItem.h>

@class NSString, NSArray;

@interface SCChunkCameraItem : SCChunkItem {

	NSString* _scancodeVersion;
	NSArray* _scancodeIds;

}

@property (nonatomic,readonly) NSString * scancodeVersion;              //@synthesize scancodeVersion=_scancodeVersion - In the implementation block
@property (nonatomic,readonly) NSArray * scancodeIds;                   //@synthesize scancodeIds=_scancodeIds - In the implementation block
-(NSString *)scancodeVersion;
-(id)cacheMediaIds;
-(NSArray *)scancodeIds;
-(id)initWithJSONDictionary:(id)arg1 chunkDictionary:(id)arg2 ;
-(void)saveMediaToCache;
-(id)initWithScancodeId:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

