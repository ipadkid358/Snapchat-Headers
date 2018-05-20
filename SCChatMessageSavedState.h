/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:13 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCChatMessageSavedState.h>

@protocol SCChatMessageSavedState <NSObject,NSCoding,NSCopying>
@property (nonatomic,readonly) BOOL saved; 
@property (nonatomic,readonly) unsigned long long version; 
@required
-(unsigned long long)version;
-(BOOL)saved;

@end


@class NSString;

@interface SCChatMessageSavedState : NSObject <SCChatMessageSavedState> {

	BOOL _saved;
	unsigned long long _version;

}

@property (nonatomic,readonly) BOOL saved;                              //@synthesize saved=_saved - In the implementation block
@property (nonatomic,readonly) unsigned long long version;              //@synthesize version=_version - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)fasterCodingVersion;
+(unsigned long long*)fasterCodingKeys;
-(BOOL)preferFasterCoding;
-(void)encodeWithFasterCoder:(id)arg1 ;
-(void)decodeWithFasterDecoder:(id)arg1 ;
-(void)setBool:(BOOL)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(void)setUInt64:(unsigned long long)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(id)initWithSaved:(BOOL)arg1 version:(unsigned long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)version;
-(BOOL)saved;
@end
