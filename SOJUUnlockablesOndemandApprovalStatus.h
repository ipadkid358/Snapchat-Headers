/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:57 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUUnlockablesOndemandApprovalStatus.h>
@class NSString, SOJUUnlockablesOndemandLineItemApprovalDetails;


@protocol SOJUUnlockablesOndemandApprovalStatus <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * status; 
@property (nonatomic,copy,readonly) SOJUUnlockablesOndemandLineItemApprovalDetails * rejectionDetails; 
@property (nonatomic,copy,readonly) SOJUUnlockablesOndemandLineItemApprovalDetails * revocationDetails; 
@required
-(SOJUUnlockablesOndemandLineItemApprovalDetails *)rejectionDetails;
-(SOJUUnlockablesOndemandLineItemApprovalDetails *)revocationDetails;
-(NSString *)status;

@end


@class NSString, SOJUUnlockablesOndemandLineItemApprovalDetails;

@interface SOJUUnlockablesOndemandApprovalStatus : NSObject <SOJUUnlockablesOndemandApprovalStatus> {

	NSString* _status;
	SOJUUnlockablesOndemandLineItemApprovalDetails* _rejectionDetails;
	SOJUUnlockablesOndemandLineItemApprovalDetails* _revocationDetails;

}

@property (nonatomic,copy,readonly) NSString * status;                                                               //@synthesize status=_status - In the implementation block
@property (nonatomic,copy,readonly) SOJUUnlockablesOndemandLineItemApprovalDetails * rejectionDetails;               //@synthesize rejectionDetails=_rejectionDetails - In the implementation block
@property (nonatomic,copy,readonly) SOJUUnlockablesOndemandLineItemApprovalDetails * revocationDetails;              //@synthesize revocationDetails=_revocationDetails - In the implementation block
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
-(long long)statusEnum;
-(SOJUUnlockablesOndemandLineItemApprovalDetails *)rejectionDetails;
-(SOJUUnlockablesOndemandLineItemApprovalDetails *)revocationDetails;
-(id)initWithStatus:(id)arg1 rejectionDetails:(id)arg2 revocationDetails:(id)arg3 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)status;
-(id)toDictionary;
@end

