/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:57 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUUnlockablesOndemandBundleDiscountRef.h>
@class NSString, SOJUUnlockablesOndemandMonetaryAmount, SOJUUnlockablesOndemandValidationError;


@protocol SOJUUnlockablesOndemandBundleDiscountRef <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * bundleLineitemId; 
@property (nonatomic,copy,readonly) SOJUUnlockablesOndemandMonetaryAmount * originalAmount; 
@property (nonatomic,copy,readonly) SOJUUnlockablesOndemandMonetaryAmount * bundleDiscountAmount; 
@property (nonatomic,copy,readonly) NSString * originalAmountProductId; 
@property (nonatomic,copy,readonly) SOJUUnlockablesOndemandValidationError * error; 
@required
-(SOJUUnlockablesOndemandMonetaryAmount *)bundleDiscountAmount;
-(SOJUUnlockablesOndemandMonetaryAmount *)originalAmount;
-(NSString *)originalAmountProductId;
-(NSString *)bundleLineitemId;
-(SOJUUnlockablesOndemandValidationError *)error;

@end


@class NSString, SOJUUnlockablesOndemandMonetaryAmount, SOJUUnlockablesOndemandValidationError;

@interface SOJUUnlockablesOndemandBundleDiscountRef : NSObject <SOJUUnlockablesOndemandBundleDiscountRef> {

	NSString* _bundleLineitemId;
	SOJUUnlockablesOndemandMonetaryAmount* _originalAmount;
	SOJUUnlockablesOndemandMonetaryAmount* _bundleDiscountAmount;
	NSString* _originalAmountProductId;
	SOJUUnlockablesOndemandValidationError* _error;

}

@property (nonatomic,copy,readonly) NSString * bundleLineitemId;                                               //@synthesize bundleLineitemId=_bundleLineitemId - In the implementation block
@property (nonatomic,copy,readonly) SOJUUnlockablesOndemandMonetaryAmount * originalAmount;                    //@synthesize originalAmount=_originalAmount - In the implementation block
@property (nonatomic,copy,readonly) SOJUUnlockablesOndemandMonetaryAmount * bundleDiscountAmount;              //@synthesize bundleDiscountAmount=_bundleDiscountAmount - In the implementation block
@property (nonatomic,copy,readonly) NSString * originalAmountProductId;                                        //@synthesize originalAmountProductId=_originalAmountProductId - In the implementation block
@property (nonatomic,copy,readonly) SOJUUnlockablesOndemandValidationError * error;                            //@synthesize error=_error - In the implementation block
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
-(SOJUUnlockablesOndemandMonetaryAmount *)bundleDiscountAmount;
-(id)initWithBundleLineitemId:(id)arg1 originalAmount:(id)arg2 bundleDiscountAmount:(id)arg3 originalAmountProductId:(id)arg4 error:(id)arg5 ;
-(SOJUUnlockablesOndemandMonetaryAmount *)originalAmount;
-(NSString *)originalAmountProductId;
-(NSString *)bundleLineitemId;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)toDictionary;
-(SOJUUnlockablesOndemandValidationError *)error;
@end
