/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:33 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIPickerView.h>
#import <UIKit/UIPickerViewDelegate.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol CountryCodePickerViewDelegate;
@class NSArray, NSString;

@interface CountryCodePickerView : UIPickerView <UIPickerViewDelegate, UIPickerViewDataSource, UIGestureRecognizerDelegate> {

	id<CountryCodePickerViewDelegate> _countryCodeDelegate;
	NSArray* _countryCodes;

}

@property (nonatomic,retain) NSArray * countryCodes;                                                    //@synthesize countryCodes=_countryCodes - In the implementation block
@property (assign,nonatomic,__weak) id<CountryCodePickerViewDelegate> countryCodeDelegate;              //@synthesize countryCodeDelegate=_countryCodeDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCountryCodes:(NSArray *)arg1 ;
-(void)didTapRow:(id)arg1 ;
-(id<CountryCodePickerViewDelegate>)countryCodeDelegate;
-(void)setSelectedCountryCode:(id)arg1 animated:(BOOL)arg2 ;
-(void)setCountryCodeDelegate:(id<CountryCodePickerViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(NSArray *)countryCodes;
-(BOOL)isSpinning;
@end

