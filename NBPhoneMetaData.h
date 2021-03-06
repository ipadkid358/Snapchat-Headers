/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:09 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NBPhoneNumberDesc, NSString, NSMutableArray;

@interface NBPhoneMetaData : NSObject {

	BOOL _sameMobileAndFixedLinePattern;
	BOOL _mainCountryForCode;
	BOOL _leadingZeroPossible;
	unsigned _countryCode;
	NBPhoneNumberDesc* _generalDesc;
	NBPhoneNumberDesc* _fixedLine;
	NBPhoneNumberDesc* _mobile;
	NBPhoneNumberDesc* _tollFree;
	NBPhoneNumberDesc* _premiumRate;
	NBPhoneNumberDesc* _sharedCost;
	NBPhoneNumberDesc* _personalNumber;
	NBPhoneNumberDesc* _voip;
	NBPhoneNumberDesc* _pager;
	NBPhoneNumberDesc* _uan;
	NBPhoneNumberDesc* _emergency;
	NBPhoneNumberDesc* _voicemail;
	NBPhoneNumberDesc* _noInternationalDialling;
	NSString* _codeID;
	NSString* _internationalPrefix;
	NSString* _preferredInternationalPrefix;
	NSString* _nationalPrefix;
	NSString* _preferredExtnPrefix;
	NSString* _nationalPrefixForParsing;
	NSString* _nationalPrefixTransformRule;
	NSMutableArray* _numberFormats;
	NSMutableArray* _intlNumberFormats;
	NSString* _leadingDigits;

}

@property (nonatomic,retain) NBPhoneNumberDesc * generalDesc;                          //@synthesize generalDesc=_generalDesc - In the implementation block
@property (nonatomic,retain) NBPhoneNumberDesc * fixedLine;                            //@synthesize fixedLine=_fixedLine - In the implementation block
@property (nonatomic,retain) NBPhoneNumberDesc * mobile;                               //@synthesize mobile=_mobile - In the implementation block
@property (nonatomic,retain) NBPhoneNumberDesc * tollFree;                             //@synthesize tollFree=_tollFree - In the implementation block
@property (nonatomic,retain) NBPhoneNumberDesc * premiumRate;                          //@synthesize premiumRate=_premiumRate - In the implementation block
@property (nonatomic,retain) NBPhoneNumberDesc * sharedCost;                           //@synthesize sharedCost=_sharedCost - In the implementation block
@property (nonatomic,retain) NBPhoneNumberDesc * personalNumber;                       //@synthesize personalNumber=_personalNumber - In the implementation block
@property (nonatomic,retain) NBPhoneNumberDesc * voip;                                 //@synthesize voip=_voip - In the implementation block
@property (nonatomic,retain) NBPhoneNumberDesc * pager;                                //@synthesize pager=_pager - In the implementation block
@property (nonatomic,retain) NBPhoneNumberDesc * uan;                                  //@synthesize uan=_uan - In the implementation block
@property (nonatomic,retain) NBPhoneNumberDesc * emergency;                            //@synthesize emergency=_emergency - In the implementation block
@property (nonatomic,retain) NBPhoneNumberDesc * voicemail;                            //@synthesize voicemail=_voicemail - In the implementation block
@property (nonatomic,retain) NBPhoneNumberDesc * noInternationalDialling;              //@synthesize noInternationalDialling=_noInternationalDialling - In the implementation block
@property (nonatomic,retain) NSString * codeID;                                        //@synthesize codeID=_codeID - In the implementation block
@property (assign,nonatomic) unsigned countryCode;                                     //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,retain) NSString * internationalPrefix;                           //@synthesize internationalPrefix=_internationalPrefix - In the implementation block
@property (nonatomic,retain) NSString * preferredInternationalPrefix;                  //@synthesize preferredInternationalPrefix=_preferredInternationalPrefix - In the implementation block
@property (nonatomic,retain) NSString * nationalPrefix;                                //@synthesize nationalPrefix=_nationalPrefix - In the implementation block
@property (nonatomic,retain) NSString * preferredExtnPrefix;                           //@synthesize preferredExtnPrefix=_preferredExtnPrefix - In the implementation block
@property (nonatomic,retain) NSString * nationalPrefixForParsing;                      //@synthesize nationalPrefixForParsing=_nationalPrefixForParsing - In the implementation block
@property (nonatomic,retain) NSString * nationalPrefixTransformRule;                   //@synthesize nationalPrefixTransformRule=_nationalPrefixTransformRule - In the implementation block
@property (assign,nonatomic) BOOL sameMobileAndFixedLinePattern;                       //@synthesize sameMobileAndFixedLinePattern=_sameMobileAndFixedLinePattern - In the implementation block
@property (nonatomic,retain) NSMutableArray * numberFormats;                           //@synthesize numberFormats=_numberFormats - In the implementation block
@property (nonatomic,retain) NSMutableArray * intlNumberFormats;                       //@synthesize intlNumberFormats=_intlNumberFormats - In the implementation block
@property (assign,nonatomic) BOOL mainCountryForCode;                                  //@synthesize mainCountryForCode=_mainCountryForCode - In the implementation block
@property (nonatomic,retain) NSString * leadingDigits;                                 //@synthesize leadingDigits=_leadingDigits - In the implementation block
@property (assign,nonatomic) BOOL leadingZeroPossible;                                 //@synthesize leadingZeroPossible=_leadingZeroPossible - In the implementation block
-(NBPhoneNumberDesc *)mobile;
-(void)setNumberFormats:(NSMutableArray *)arg1 ;
-(void)setIntlNumberFormats:(NSMutableArray *)arg1 ;
-(void)setLeadingZeroPossible:(BOOL)arg1 ;
-(void)setMainCountryForCode:(BOOL)arg1 ;
-(NSString *)codeID;
-(NBPhoneNumberDesc *)generalDesc;
-(NBPhoneNumberDesc *)fixedLine;
-(NBPhoneNumberDesc *)tollFree;
-(NBPhoneNumberDesc *)premiumRate;
-(NBPhoneNumberDesc *)sharedCost;
-(NBPhoneNumberDesc *)personalNumber;
-(NBPhoneNumberDesc *)voip;
-(NBPhoneNumberDesc *)pager;
-(NBPhoneNumberDesc *)uan;
-(NBPhoneNumberDesc *)emergency;
-(NBPhoneNumberDesc *)voicemail;
-(NBPhoneNumberDesc *)noInternationalDialling;
-(NSString *)internationalPrefix;
-(NSString *)preferredInternationalPrefix;
-(NSString *)nationalPrefix;
-(NSString *)preferredExtnPrefix;
-(NSString *)nationalPrefixForParsing;
-(NSString *)nationalPrefixTransformRule;
-(BOOL)sameMobileAndFixedLinePattern;
-(NSMutableArray *)numberFormats;
-(NSMutableArray *)intlNumberFormats;
-(BOOL)mainCountryForCode;
-(NSString *)leadingDigits;
-(BOOL)leadingZeroPossible;
-(void)setGeneralDesc:(NBPhoneNumberDesc *)arg1 ;
-(void)setFixedLine:(NBPhoneNumberDesc *)arg1 ;
-(void)setMobile:(NBPhoneNumberDesc *)arg1 ;
-(void)setTollFree:(NBPhoneNumberDesc *)arg1 ;
-(void)setPremiumRate:(NBPhoneNumberDesc *)arg1 ;
-(void)setSharedCost:(NBPhoneNumberDesc *)arg1 ;
-(void)setPersonalNumber:(NBPhoneNumberDesc *)arg1 ;
-(void)setVoip:(NBPhoneNumberDesc *)arg1 ;
-(void)setPager:(NBPhoneNumberDesc *)arg1 ;
-(void)setUan:(NBPhoneNumberDesc *)arg1 ;
-(void)setNoInternationalDialling:(NBPhoneNumberDesc *)arg1 ;
-(void)setCodeID:(NSString *)arg1 ;
-(void)setInternationalPrefix:(NSString *)arg1 ;
-(void)setPreferredInternationalPrefix:(NSString *)arg1 ;
-(void)setNationalPrefix:(NSString *)arg1 ;
-(void)setPreferredExtnPrefix:(NSString *)arg1 ;
-(void)setNationalPrefixForParsing:(NSString *)arg1 ;
-(void)setNationalPrefixTransformRule:(NSString *)arg1 ;
-(void)setSameMobileAndFixedLinePattern:(BOOL)arg1 ;
-(id)numberFormatArrayFromData:(id)arg1 ;
-(void)setLeadingDigits:(NSString *)arg1 ;
-(void)buildData:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned)countryCode;
-(void)setCountryCode:(unsigned)arg1 ;
-(void)setVoicemail:(NBPhoneNumberDesc *)arg1 ;
-(void)setEmergency:(NBPhoneNumberDesc *)arg1 ;
@end

