/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:04 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCAUserTrackedEvent.h>
#import <Snapchat/MapSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString;

@interface SCACashStorePaymentInitiate : SCAUserTrackedEvent <MapSerializable, NSCopying> {

	NSNumber* cashAmount;
	long long product;
	NSString* cashCurrency;
	NSString* productId;
	NSString* source;

}
-(id)getEventName;
-(long long)getEventQoS;
-(double)getSamplingRate;
-(id)getSource;
-(double)getCashAmount;
-(void)setCashAmount:(double)arg1 ;
-(id)getCashCurrency;
-(void)setCashCurrency:(id)arg1 ;
-(long long)getProduct;
-(id)getProductId;
-(id)init;
-(void)setSource:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setProductId:(id)arg1 ;
-(id)asDictionary;
-(void)setProduct:(long long)arg1 ;
@end

