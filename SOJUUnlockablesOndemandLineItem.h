/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:57 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUUnlockablesOndemandLineItem.h>
@class NSString, SOJUUnlockablesOndemandSubmission, SOJUUnlockablesOndemandOwner, SOJUUnlockablesOndemandAsset, NSArray, SOJUUnlockablesOndemandTargeting, SOJUUnlockablesOndemandSchedule, SOJUUnlockablesOndemandLineItemProperties, SOJUUnlockablesOndemandPriceCalculation, SOJUUnlockablesOndemandPayment, SOJUUnlockablesOndemandApprovalStatus, SOJUUnlockablesOndemandServing, SOJUUnlockablesOndemandCancellation, SOJUUnlockablesOndemandCountry, SOJUUnlockablesOndemandLease, SOJUUnlockablesOndemandMobilePayment, SOJUUnlockablesOndemandAutoApprovalResult, NSNumber;


@protocol SOJUUnlockablesOndemandLineItem <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * idValue; 
@property (nonatomic,copy,readonly) SOJUUnlockablesOndemandSubmission * submission; 
@property (nonatomic,copy,readonly) SOJUUnlockablesOndemandOwner * owner; 
@property (nonatomic,copy,readonly) SOJUUnlockablesOndemandAsset * asset; 
@property (nonatomic,copy,readonly) NSArray * assets; 
@property (nonatomic,copy,readonly) SOJUUnlockablesOndemandTargeting * targeting; 
@property (nonatomic,copy,readonly) SOJUUnlockablesOndemandSchedule * schedule; 
@property (nonatomic,copy,readonly) SOJUUnlockablesOndemandLineItemProperties * properties; 
@property (nonatomic,copy,readonly) SOJUUnlockablesOndemandPriceCalculation * offer; 
@property (nonatomic,copy,readonly) SOJUUnlockablesOndemandPayment * payment; 
@property (nonatomic,copy,readonly) SOJUUnlockablesOndemandApprovalStatus * approval; 
@property (nonatomic,copy,readonly) SOJUUnlockablesOndemandServing * serving; 
@property (nonatomic,copy,readonly) SOJUUnlockablesOndemandCancellation * cancellation; 
@property (nonatomic,copy,readonly) NSString * locale; 
@property (nonatomic,copy,readonly) NSString * tosVersion; 
@property (nonatomic,copy,readonly) SOJUUnlockablesOndemandCountry * country; 
@property (nonatomic,copy,readonly) NSString * orgCountry; 
@property (nonatomic,copy,readonly) SOJUUnlockablesOndemandLease * lease; 
@property (nonatomic,copy,readonly) NSString * userAgent; 
@property (nonatomic,copy,readonly) SOJUUnlockablesOndemandMobilePayment * mobilePayment; 
@property (nonatomic,copy,readonly) NSString * preRenderingAssetsStructuredId; 
@property (nonatomic,copy,readonly) NSString * templateId; 
@property (nonatomic,copy,readonly) NSString * discountCode; 
@property (nonatomic,copy,readonly) NSString * templateInstanceId; 
@property (nonatomic,copy,readonly) SOJUUnlockablesOndemandAutoApprovalResult * autoApprovalResult; 
@property (nonatomic,copy,readonly) NSString * productType; 
@property (nonatomic,copy,readonly) NSString * previewRequestId; 
@property (nonatomic,copy,readonly) NSNumber * paymentCollectedBeforeSubmission; 
@property (nonatomic,copy,readonly) NSString * bundleLineitemId; 
@property (nonatomic,copy,readonly) NSNumber * canSubmitRedesignForAccepted; 
@property (nonatomic,copy,readonly) NSNumber * canResubmitRejectedFilter; 
@required
-(SOJUUnlockablesOndemandTargeting *)targeting;
-(NSString *)idValue;
-(NSString *)discountCode;
-(SOJUUnlockablesOndemandSubmission *)submission;
-(SOJUUnlockablesOndemandApprovalStatus *)approval;
-(SOJUUnlockablesOndemandServing *)serving;
-(SOJUUnlockablesOndemandCancellation *)cancellation;
-(NSString *)tosVersion;
-(NSString *)orgCountry;
-(SOJUUnlockablesOndemandLease *)lease;
-(SOJUUnlockablesOndemandMobilePayment *)mobilePayment;
-(NSString *)preRenderingAssetsStructuredId;
-(NSString *)templateId;
-(NSString *)templateInstanceId;
-(NSString *)previewRequestId;
-(NSNumber *)paymentCollectedBeforeSubmission;
-(NSString *)bundleLineitemId;
-(NSNumber *)canSubmitRedesignForAccepted;
-(NSNumber *)canResubmitRejectedFilter;
-(SOJUUnlockablesOndemandAutoApprovalResult *)autoApprovalResult;
-(SOJUUnlockablesOndemandOwner *)owner;
-(NSString *)locale;
-(SOJUUnlockablesOndemandAsset *)asset;
-(SOJUUnlockablesOndemandLineItemProperties *)properties;
-(SOJUUnlockablesOndemandSchedule *)schedule;
-(NSString *)userAgent;
-(SOJUUnlockablesOndemandCountry *)country;
-(SOJUUnlockablesOndemandPriceCalculation *)offer;
-(NSArray *)assets;
-(NSString *)productType;
-(SOJUUnlockablesOndemandPayment *)payment;

@end


@class NSString, SOJUUnlockablesOndemandSubmission, SOJUUnlockablesOndemandOwner, SOJUUnlockablesOndemandAsset, NSArray, SOJUUnlockablesOndemandTargeting, SOJUUnlockablesOndemandSchedule, SOJUUnlockablesOndemandLineItemProperties, SOJUUnlockablesOndemandPriceCalculation, SOJUUnlockablesOndemandPayment, SOJUUnlockablesOndemandApprovalStatus, SOJUUnlockablesOndemandServing, SOJUUnlockablesOndemandCancellation, SOJUUnlockablesOndemandCountry, SOJUUnlockablesOndemandLease, SOJUUnlockablesOndemandMobilePayment, SOJUUnlockablesOndemandAutoApprovalResult, NSNumber;

@interface SOJUUnlockablesOndemandLineItem : NSObject <SOJUUnlockablesOndemandLineItem> {

	NSString* _idValue;
	SOJUUnlockablesOndemandSubmission* _submission;
	SOJUUnlockablesOndemandOwner* _owner;
	SOJUUnlockablesOndemandAsset* _asset;
	NSArray* _assets;
	SOJUUnlockablesOndemandTargeting* _targeting;
	SOJUUnlockablesOndemandSchedule* _schedule;
	SOJUUnlockablesOndemandLineItemProperties* _properties;
	SOJUUnlockablesOndemandPriceCalculation* _offer;
	SOJUUnlockablesOndemandPayment* _payment;
	SOJUUnlockablesOndemandApprovalStatus* _approval;
	SOJUUnlockablesOndemandServing* _serving;
	SOJUUnlockablesOndemandCancellation* _cancellation;
	NSString* _locale;
	NSString* _tosVersion;
	SOJUUnlockablesOndemandCountry* _country;
	NSString* _orgCountry;
	SOJUUnlockablesOndemandLease* _lease;
	NSString* _userAgent;
	SOJUUnlockablesOndemandMobilePayment* _mobilePayment;
	NSString* _preRenderingAssetsStructuredId;
	NSString* _templateId;
	NSString* _discountCode;
	NSString* _templateInstanceId;
	SOJUUnlockablesOndemandAutoApprovalResult* _autoApprovalResult;
	NSString* _productType;
	NSString* _previewRequestId;
	NSNumber* _paymentCollectedBeforeSubmission;
	NSString* _bundleLineitemId;
	NSNumber* _canSubmitRedesignForAccepted;
	NSNumber* _canResubmitRejectedFilter;

}

@property (nonatomic,copy,readonly) NSString * idValue;                                                          //@synthesize idValue=_idValue - In the implementation block
@property (nonatomic,copy,readonly) SOJUUnlockablesOndemandSubmission * submission;                              //@synthesize submission=_submission - In the implementation block
@property (nonatomic,copy,readonly) SOJUUnlockablesOndemandOwner * owner;                                        //@synthesize owner=_owner - In the implementation block
@property (nonatomic,copy,readonly) SOJUUnlockablesOndemandAsset * asset;                                        //@synthesize asset=_asset - In the implementation block
@property (nonatomic,copy,readonly) NSArray * assets;                                                            //@synthesize assets=_assets - In the implementation block
@property (nonatomic,copy,readonly) SOJUUnlockablesOndemandTargeting * targeting;                                //@synthesize targeting=_targeting - In the implementation block
@property (nonatomic,copy,readonly) SOJUUnlockablesOndemandSchedule * schedule;                                  //@synthesize schedule=_schedule - In the implementation block
@property (nonatomic,copy,readonly) SOJUUnlockablesOndemandLineItemProperties * properties;                      //@synthesize properties=_properties - In the implementation block
@property (nonatomic,copy,readonly) SOJUUnlockablesOndemandPriceCalculation * offer;                             //@synthesize offer=_offer - In the implementation block
@property (nonatomic,copy,readonly) SOJUUnlockablesOndemandPayment * payment;                                    //@synthesize payment=_payment - In the implementation block
@property (nonatomic,copy,readonly) SOJUUnlockablesOndemandApprovalStatus * approval;                            //@synthesize approval=_approval - In the implementation block
@property (nonatomic,copy,readonly) SOJUUnlockablesOndemandServing * serving;                                    //@synthesize serving=_serving - In the implementation block
@property (nonatomic,copy,readonly) SOJUUnlockablesOndemandCancellation * cancellation;                          //@synthesize cancellation=_cancellation - In the implementation block
@property (nonatomic,copy,readonly) NSString * locale;                                                           //@synthesize locale=_locale - In the implementation block
@property (nonatomic,copy,readonly) NSString * tosVersion;                                                       //@synthesize tosVersion=_tosVersion - In the implementation block
@property (nonatomic,copy,readonly) SOJUUnlockablesOndemandCountry * country;                                    //@synthesize country=_country - In the implementation block
@property (nonatomic,copy,readonly) NSString * orgCountry;                                                       //@synthesize orgCountry=_orgCountry - In the implementation block
@property (nonatomic,copy,readonly) SOJUUnlockablesOndemandLease * lease;                                        //@synthesize lease=_lease - In the implementation block
@property (nonatomic,copy,readonly) NSString * userAgent;                                                        //@synthesize userAgent=_userAgent - In the implementation block
@property (nonatomic,copy,readonly) SOJUUnlockablesOndemandMobilePayment * mobilePayment;                        //@synthesize mobilePayment=_mobilePayment - In the implementation block
@property (nonatomic,copy,readonly) NSString * preRenderingAssetsStructuredId;                                   //@synthesize preRenderingAssetsStructuredId=_preRenderingAssetsStructuredId - In the implementation block
@property (nonatomic,copy,readonly) NSString * templateId;                                                       //@synthesize templateId=_templateId - In the implementation block
@property (nonatomic,copy,readonly) NSString * discountCode;                                                     //@synthesize discountCode=_discountCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * templateInstanceId;                                               //@synthesize templateInstanceId=_templateInstanceId - In the implementation block
@property (nonatomic,copy,readonly) SOJUUnlockablesOndemandAutoApprovalResult * autoApprovalResult;              //@synthesize autoApprovalResult=_autoApprovalResult - In the implementation block
@property (nonatomic,copy,readonly) NSString * productType;                                                      //@synthesize productType=_productType - In the implementation block
@property (nonatomic,copy,readonly) NSString * previewRequestId;                                                 //@synthesize previewRequestId=_previewRequestId - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * paymentCollectedBeforeSubmission;                                 //@synthesize paymentCollectedBeforeSubmission=_paymentCollectedBeforeSubmission - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleLineitemId;                                                 //@synthesize bundleLineitemId=_bundleLineitemId - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * canSubmitRedesignForAccepted;                                     //@synthesize canSubmitRedesignForAccepted=_canSubmitRedesignForAccepted - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * canResubmitRejectedFilter;                                        //@synthesize canResubmitRejectedFilter=_canResubmitRejectedFilter - In the implementation block
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
-(SOJUUnlockablesOndemandTargeting *)targeting;
-(NSString *)idValue;
-(NSString *)discountCode;
-(long long)productTypeEnum;
-(long long)orgCountryEnum;
-(BOOL)paymentCollectedBeforeSubmissionValue;
-(BOOL)canSubmitRedesignForAcceptedValue;
-(BOOL)canResubmitRejectedFilterValue;
-(SOJUUnlockablesOndemandSubmission *)submission;
-(SOJUUnlockablesOndemandApprovalStatus *)approval;
-(SOJUUnlockablesOndemandServing *)serving;
-(SOJUUnlockablesOndemandCancellation *)cancellation;
-(NSString *)tosVersion;
-(NSString *)orgCountry;
-(SOJUUnlockablesOndemandLease *)lease;
-(SOJUUnlockablesOndemandMobilePayment *)mobilePayment;
-(NSString *)preRenderingAssetsStructuredId;
-(NSString *)templateId;
-(NSString *)templateInstanceId;
-(NSString *)previewRequestId;
-(NSNumber *)paymentCollectedBeforeSubmission;
-(NSString *)bundleLineitemId;
-(NSNumber *)canSubmitRedesignForAccepted;
-(NSNumber *)canResubmitRejectedFilter;
-(id)initWithIdValue:(id)arg1 submission:(id)arg2 owner:(id)arg3 asset:(id)arg4 assets:(id)arg5 targeting:(id)arg6 schedule:(id)arg7 properties:(id)arg8 offer:(id)arg9 payment:(id)arg10 approval:(id)arg11 serving:(id)arg12 cancellation:(id)arg13 locale:(id)arg14 tosVersion:(id)arg15 country:(id)arg16 orgCountry:(id)arg17 lease:(id)arg18 userAgent:(id)arg19 mobilePayment:(id)arg20 preRenderingAssetsStructuredId:(id)arg21 templateId:(id)arg22 discountCode:(id)arg23 templateInstanceId:(id)arg24 autoApprovalResult:(id)arg25 productType:(id)arg26 previewRequestId:(id)arg27 paymentCollectedBeforeSubmission:(id)arg28 bundleLineitemId:(id)arg29 canSubmitRedesignForAccepted:(id)arg30 canResubmitRejectedFilter:(id)arg31 ;
-(SOJUUnlockablesOndemandAutoApprovalResult *)autoApprovalResult;
-(id)initWithJSONDictionary:(id)arg1 ;
-(void)setPaymentSource:(id)arg1 ;
-(id)paymentSource;
-(id)localizedPrice;
-(BOOL)canResubmit;
-(id)setPendingLineItemStatus:(id)arg1 ;
-(BOOL)isUnsubmitted;
-(id)setPendingLineItemStatus:(id)arg1 itemId:(id)arg2 ;
-(void)setSubmissionInvalidInfo:(id)arg1 ;
-(id)submissionInvalidInfo;
-(BOOL)notificationHasShown;
-(void)setNotificationHasShown:(BOOL)arg1 ;
-(unsigned long long)lineItemApprovalStatus;
-(BOOL)canCreateDraft;
-(id)validationAndFixWithGeofilterSession:(id)arg1 ;
-(id)lineItemStatusBackgroundColor;
-(BOOL)shouldShowRejectionReason;
-(BOOL)isFreeGeoFilter;
-(id)stringForRejectionCode;
-(BOOL)autoRejected;
-(BOOL)canCollectPaymentFirst;
-(BOOL)shouldShowMetrics;
-(id)lineItemStatusColor;
-(BOOL)shouldShowManageSection;
-(BOOL)shouldEnableCancellation;
-(id)lineItemApprovalStatusMessage;
-(id)validationErrorWithCode:(unsigned long long)arg1 ;
-(BOOL)autoApproved;
-(BOOL)flightTimeLessThan24Hours;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SOJUUnlockablesOndemandOwner *)owner;
-(NSString *)locale;
-(SOJUUnlockablesOndemandAsset *)asset;
-(SOJUUnlockablesOndemandLineItemProperties *)properties;
-(SOJUUnlockablesOndemandSchedule *)schedule;
-(NSString *)userAgent;
-(SOJUUnlockablesOndemandCountry *)country;
-(SOJUUnlockablesOndemandPriceCalculation *)offer;
-(id)statusMessage;
-(id)toDictionary;
-(NSArray *)assets;
-(NSString *)productType;
-(SOJUUnlockablesOndemandPayment *)payment;
@end

