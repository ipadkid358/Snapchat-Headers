/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber, NSError;

@interface SCPaymentsShippingAddress : NSObject {

	NSString* _addressId;
	NSString* _fullName;
	NSString* _firstName;
	NSString* _lastName;
	NSNumber* _isDefault;
	NSString* _streetAddress1;
	NSString* _streetAddress2;
	NSString* _city;
	NSString* _state;
	NSString* _country;
	NSString* _zip;
	NSNumber* _updatedAt;
	NSNumber* _lastUsedAt;
	NSError* _addressError;

}

@property (nonatomic,copy,readonly) NSString * addressId;                   //@synthesize addressId=_addressId - In the implementation block
@property (nonatomic,copy,readonly) NSString * fullName;                    //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,copy,readonly) NSString * firstName;                   //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy,readonly) NSString * lastName;                    //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * isDefault;                   //@synthesize isDefault=_isDefault - In the implementation block
@property (nonatomic,copy,readonly) NSString * streetAddress1;              //@synthesize streetAddress1=_streetAddress1 - In the implementation block
@property (nonatomic,copy,readonly) NSString * streetAddress2;              //@synthesize streetAddress2=_streetAddress2 - In the implementation block
@property (nonatomic,copy,readonly) NSString * city;                        //@synthesize city=_city - In the implementation block
@property (nonatomic,copy,readonly) NSString * state;                       //@synthesize state=_state - In the implementation block
@property (nonatomic,copy,readonly) NSString * country;                     //@synthesize country=_country - In the implementation block
@property (nonatomic,copy,readonly) NSString * zip;                         //@synthesize zip=_zip - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * updatedAt;                   //@synthesize updatedAt=_updatedAt - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * lastUsedAt;                  //@synthesize lastUsedAt=_lastUsedAt - In the implementation block
@property (nonatomic,retain) NSError * addressError;                        //@synthesize addressError=_addressError - In the implementation block
-(NSNumber *)updatedAt;
-(NSString *)addressId;
-(NSNumber *)lastUsedAt;
-(id)toSoju;
-(id)initWithSOJUModel:(id)arg1 ;
-(id)initWithFullName:(id)arg1 firstName:(id)arg2 lastName:(id)arg3 streetAddress1:(id)arg4 streetAddress2:(id)arg5 city:(id)arg6 state:(id)arg7 country:(id)arg8 zip:(id)arg9 ;
-(NSString *)streetAddress1;
-(NSString *)streetAddress2;
-(BOOL)isValidModel;
-(BOOL)didFailValidation;
-(NSError *)addressError;
-(void)setAddressError:(NSError *)arg1 ;
-(id)initWithAddressId:(id)arg1 fullName:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 isDefault:(id)arg5 streetAddress1:(id)arg6 streetAddress2:(id)arg7 city:(id)arg8 state:(id)arg9 country:(id)arg10 zip:(id)arg11 updatedAt:(id)arg12 lastUsedAt:(id)arg13 ;
-(BOOL)_validateSoju:(id)arg1 ;
-(NSString *)state;
-(BOOL)_validate;
-(NSString *)country;
-(NSNumber *)isDefault;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)city;
-(NSString *)fullName;
-(NSString *)zip;
@end
