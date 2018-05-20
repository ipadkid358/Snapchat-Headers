/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:57 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUUnlockablesOndemandPreRenderingAssetsStructuredResponse.h>
@class NSString, SOJUUnlockablesOndemandAutoApprovalResult;


@protocol SOJUUnlockablesOndemandPreRenderingAssetsStructuredResponse <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * idValue; 
@property (nonatomic,copy,readonly) NSString * bytes; 
@property (nonatomic,copy,readonly) SOJUUnlockablesOndemandAutoApprovalResult * autoApprovalResult; 
@required
-(NSString *)idValue;
-(SOJUUnlockablesOndemandAutoApprovalResult *)autoApprovalResult;
-(NSString *)bytes;

@end


@class NSString, SOJUUnlockablesOndemandAutoApprovalResult;

@interface SOJUUnlockablesOndemandPreRenderingAssetsStructuredResponse : NSObject <SOJUUnlockablesOndemandPreRenderingAssetsStructuredResponse> {

	NSString* _idValue;
	NSString* _bytes;
	SOJUUnlockablesOndemandAutoApprovalResult* _autoApprovalResult;

}

@property (nonatomic,copy,readonly) NSString * idValue;                                                          //@synthesize idValue=_idValue - In the implementation block
@property (nonatomic,copy,readonly) NSString * bytes;                                                            //@synthesize bytes=_bytes - In the implementation block
@property (nonatomic,copy,readonly) SOJUUnlockablesOndemandAutoApprovalResult * autoApprovalResult;              //@synthesize autoApprovalResult=_autoApprovalResult - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)fasterCodingVersion;
+(unsigned long long*)fasterCodingKeys;
+(BOOL)canInitFromProto;
-(BOOL)preferFasterCoding;
-(void)encodeWithFasterCoder:(id)arg1 ;
-(void)decodeWithFasterDecoder:(id)arg1 ;
-(void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(id)toJson;
-(NSString *)idValue;
-(SOJUUnlockablesOndemandAutoApprovalResult *)autoApprovalResult;
-(id)initWithIdValue:(id)arg1 bytes:(id)arg2 autoApprovalResult:(id)arg3 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)bytes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)toDictionary;
@end

